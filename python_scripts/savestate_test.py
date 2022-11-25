import savestate
import emu

print("PY: Start savestate_test.py")

while(True):
    if emu.framecount() == 15 * 60:
        ss = savestate.object(1)
        print("PY: SAVE", ss)
        savestate.save(ss)
    
    # Repeats every 5 seconds, framecount is also loaded on load state 
    if emu.framecount() == 20 * 60:
        print("PY: LOAD", ss)
        savestate.load(ss)
    
    emu.frameadvance()