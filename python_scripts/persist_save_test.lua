print("Start persist_save_test.lua")

while (1) do
    if (emu.framecount() == 15 * 60) then
        ss = savestate.object(2)
        print("Save", ss)
        savestate.save(ss)
        savestate.persist(ss)
    end

    emu.frameadvance()
end
