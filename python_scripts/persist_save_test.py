import emu
import savestate

print("PY: Start persist_save_test.py")

while True:
    if emu.framecount() == 15 * 60:
        ss = savestate.object(1)
        print("PY: SAVE", ss)
        savestate.save(ss)
        savestate.persist(ss)

    emu.frameadvance()
