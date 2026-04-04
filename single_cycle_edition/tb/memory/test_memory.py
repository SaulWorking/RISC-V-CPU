# test_memory.py

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer


@cocotb.test()
async def memory_data_test(dut):
    # start 10 nanosecond (ns) clock
    cocotb.start_soon(Clock(dut.clk, 1, unit="ns").start())
    await RisingEdge(dut.clk)

    #reset + reset values
    dut.rst_n.value = 0
    dut.write_enable.value = 0
    dut.address.value = 0
    dut.write_data.value = 0

    await RisingEdge(dut.clk)
    dut.rst_n.value = 1
    await RisingEdge(dut.clk)

    # everything 0 after reset
    for address in range(dut.WORDS.value):
        dut.address.value = address
        await Timer(1, unit="ns")
        assert dut.read_data.value == "00000000000000000000000000000000"

    # test: write and read back random data
    test_data = [
            (0, 0xDEADBEEF), 
            (4,0xCAFEBABE),
            (8,0x12345678),
            (12,0xA5a5a5a5)
    ]

    for address, data in test_data:
        #write data to memory
        dut.address.value = address
        dut.write_data.value = data
        dut.write_enable.value = 1
        await RisingEdge(dut.clk)

        #disable write after one cycle
        dut.write_enable.value = 0
        await RisingEdge(dut.clk)

        #verify the write reading back
        dut.address.value =address
        await RisingEdge(dut.clk)
        assert dut.read_data.value == data

    
    #test: writing to multiple addresses then reading them
    for i in range(40,4):
        dut.address.value = i
        dut.write_data.value = i+100
        dut.write_enable.value = 1
        await RisingEdge(dut.clk)

    #disable write, then read back values
    dut.write_enable.value = 0    
    for i in range(40,4):
        dut.address.value = i
        await RisingEdge(dut.clk)
        expected_value = i + 100
        assert dut.read_data.value == expected_value
