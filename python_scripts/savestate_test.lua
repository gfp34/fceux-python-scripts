print("Start savestate_test.lua")

ss = nil

while (1) do
    if (emu.framecount() == (15 * 60)) then
        ss = savestate.object(1)
        print("Save", ss)
        savestate.save(ss)
    end

    if (emu.framecount() == (20 * 60)) then
        print("Load", ss)
        savestate.load(ss)
    end

    emu.frameadvance()
end