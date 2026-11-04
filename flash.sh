#!/usr/bin/env bash
# Flash both Swoop halves hands-free: left first, then right
# (or only the given ones: ./flash.sh right).
# Start it while the keyboard still works (it asks for the sudo password),
# then put each half in the bootloader when prompted.
set -euo pipefail
cd "$(dirname "$(readlink -f "$0")")"

[[ $EUID -eq 0 ]] || exec sudo "$0" "$@"

dev=/dev/disk/by-label/RPI-RP2

flash() {
    local side=$1
    local uf2=bluebell_swoop_aciceri_miryoku_${side}_sparkfun_pm2040.uf2
    [[ -f $uf2 ]] || { echo "missing $uf2: run 'nix develop -c qmk userspace-compile'" >&2; exit 1; }

    echo ">>> ${side^^}: plug USB into the $side half and double-press its reset button"
    until [[ -e $dev ]]; do sleep 0.5; done
    sleep 1

    local mnt
    mnt=$(mktemp -d)
    mount "$dev" "$mnt"
    cp "$uf2" "$mnt/"
    sync || true
    umount "$mnt" 2>/dev/null || umount -l "$mnt" 2>/dev/null || true
    rmdir "$mnt"

    echo ">>> ${side^^}: flashed, waiting for it to reboot"
    while [[ -e $dev ]]; do sleep 0.5; done
    echo ">>> ${side^^}: done"
}

sides=("$@")
[[ ${#sides[@]} -gt 0 ]] || sides=(left right)
for side in "${sides[@]}"; do
    [[ $side == left || $side == right ]] || { echo "unknown side: $side" >&2; exit 1; }
    flash "$side"
done
echo ">>> Flashed: ${sides[*]}. Unplug USB, reconnect the TRRS cable, plug USB back in."
