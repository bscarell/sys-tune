#pragma once

#include "hos/fs.hpp"

#include <tesla.hpp>

class BrowserGui : public tsl::Gui {
  private:
    tsl::elm::List *m_list;
    fs::IFileSystem m_fs;
    bool has_music;
    char cwd[FS_MAX_PATH];

  public:
    BrowserGui();

    virtual tsl::elm::Element *createUI() override;
    virtual void update() override;
    virtual bool handleInput(u64 keysDown, u64, touchPosition, JoystickPosition, JoystickPosition) override;

  private:
    void scanCwd();
    void upCwd();
};
