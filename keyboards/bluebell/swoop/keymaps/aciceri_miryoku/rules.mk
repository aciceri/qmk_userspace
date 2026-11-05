VIA_ENABLE = yes
VIAL_ENABLE = yes
# Tap-hold settings live in config.h, not in Vial's EEPROM-backed QMK Settings
QMK_SETTINGS = no

# Per-key LEDs: RGB Matrix (LED map in keymap.c) instead of the Swoop's RGBlight
RGBLIGHT_ENABLE = no
RGB_MATRIX_ENABLE = yes
RGB_MATRIX_DRIVER = ws2812
VIALRGB_ENABLE = yes

# The Swoop is split with EE_HANDS: handedness lives in EEPROM and is
# (re)written at boot by the per-half images, see qmk.json.
ifeq ($(strip $(SPLIT_HAND)), left)
    OPT_DEFS += -DINIT_EE_HANDS_LEFT
else ifeq ($(strip $(SPLIT_HAND)), right)
    OPT_DEFS += -DINIT_EE_HANDS_RIGHT
endif
