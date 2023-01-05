import emu
import savestate

print("PY: Start persist_load_test.py")

while True:
    if emu.framecount() == 5 * 60:
        print("PY: LOAD")
        savestate.load(1)
    
    emu.frameadvance()
