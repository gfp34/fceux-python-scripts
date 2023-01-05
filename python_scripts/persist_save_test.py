import emu
import savestate

print("PY: Start persist_save_test.py")

while True:
    if emu.framecount() == 15 * 60:
        print("PY: SAVE")
        savestate.save(1, True)

    emu.frameadvance()
