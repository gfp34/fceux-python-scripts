import emu
import memory

while True:
    print(f"PY: Mario (x, y) position - ({memory.readbyte(0x03AD)}, {memory.readbyte(0x03B8)})")

    emu.frameadvance()