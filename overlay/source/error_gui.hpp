#pragma once

#include <tesla.hpp>

class ErrorGui : public tsl::Gui {
  private:
    const char *m_msg;

  public:
    ErrorGui(const char *msg);
    ErrorGui(Result rc);

    virtual tsl::elm::Element *createUI() override;
    virtual void update() override;
    virtual bool handleInput(u64, u64, touchPosition, JoystickPosition, JoystickPosition) override;
};