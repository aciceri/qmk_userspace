VIA_ENABLE = yes
VIAL_ENABLE = yes

# The Swoop is split with EE_HANDS: handedness lives in EEPROM and is
# (re)written at boot by the per-half images, see qmk.json.
ifeq ($(strip $(SPLIT_HAND)), left)
    OPT_DEFS += -DINIT_EE_HANDS_LEFT
else ifeq ($(strip $(SPLIT_HAND)), right)
    OPT_DEFS += -DINIT_EE_HANDS_RIGHT
endif
