#ifndef OSW_UI_H
#define OSW_UI_H

#include <osw_hal.h>

class OswAppSwitcher;
class OswUI {
 public:
  OswUI();
  void setup();
  void loop(OswAppSwitcher& mainAppSwitcher, uint16_t& mainAppIndex);
  static OswUI* getInstance();

  uint16_t getBackgroundColor(void);
  uint16_t getBackgroundDimmedColor(void);
  uint16_t getForegroundColor(void);
  uint16_t getForegroundDimmedColor(void);
  uint16_t getPrimaryColor(void);
  uint16_t getInfoColor(void);
  uint16_t getSuccessColor(void);
  uint16_t getWarningColor(void);
  uint16_t getDangerColor(void);

  void resetTextColors(void);
  void setTextCursor(Button btn);

 private:
  static OswUI instance;
  unsigned long mTargetFPS = 30;
};

#endif
