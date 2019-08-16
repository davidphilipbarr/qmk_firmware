#include "cookpad_pad.h"

#define _BASE 0

#define KC_ KC_TRANSPARENT

#define KC_RTOG RGB_TOG
#define KC_RMOF RGB_MODE_FORWARD
#define KC_RMOR RGB_MODE_REVERSE
#define KC_RHUI RGB_HUI
#define KC_RHUD RGB_HUD

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT_kc(
  // |----|----|----|
       BSPC , UP  , ENT  ,
  // |----|----|----|
       LEFT  , DOWN  ,RIGHT
  // |----|----|----|
  ),



};
