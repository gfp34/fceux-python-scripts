print("Start persist_load_test.py")

while (1) do
    if (emu.framecount() == 5 * 60) then
        ss = savestate.object(2)
        print("Load", ss)
        savestate.load(ss)
    end

    emu.frameadvance()
end
