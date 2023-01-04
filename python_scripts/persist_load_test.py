import emu
import savestate

print("PY: Start persist_load_test.py")

while True:
    if emu.framecount() == 5 * 60:
        ss = savestate.object(1)
        print("PY: LOAD", ss)
        savestate.load(ss)
    
    emu.frameadvance()
