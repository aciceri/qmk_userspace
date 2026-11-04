# QMK/Vial userspace for the Bluebell Swoop

Miryoku-style keymap (home row mods, 8 layers, RGB underglow) for a
[Swoop](https://github.com/jimmerricks/swoop) with SparkFun Pro Micro RP2040
controllers, built with [Vial](https://get.vial.today).

- `keyboards/bluebell/swoop/keymaps/aciceri_miryoku/`: keymap (`keymap.c`),
  Vial definition (`vial.json`), settings (`config.h`, `rules.mk`).
- `qmk_firmware/`: [vial-qmk](https://github.com/vial-kb/vial-qmk) submodule,
  pinned to the commit the firmware is built against.
- `qmk.json`: two build targets, one image per half.

The keymap in `keymap.c` is the default; changes made in Vial live in the
keyboard's EEPROM until Vial's "Reset to defaults" (or a flash that resets
EEPROM) restores it.

## Build

```sh
git submodule update --init --recursive --depth 1
nix develop -c qmk userspace-compile
```

Produces `bluebell_swoop_aciceri_miryoku_{left,right}_sparkfun_pm2040.uf2`.
Pushing also builds them in GitHub Actions (artifacts and Releases).

Bump vial-qmk with `git -C qmk_firmware pull` (then update its submodules
as above) and commit the new submodule pointer.

## Flash

The Swoop uses `EE_HANDS`: each image writes its handedness at boot, so the
left image goes on the left half and the right image on the right one.

For each half: unplug the TRRS cable, plug USB, double-tap reset (or hold
BOOT while plugging) so it mounts as `RPI-RP2`, then copy the matching
`.uf2` onto it.

## Vial

Open [vial.rocks](https://vial.rocks) or the Vial app. To unlock editing of
security-sensitive features, hold Q + P when Vial asks.
