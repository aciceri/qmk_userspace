{
  description = "QMK/Vial userspace for the Bluebell Swoop";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";
    flake-parts.url = "github:hercules-ci/flake-parts";
  };

  outputs =
    inputs:
    inputs.flake-parts.lib.mkFlake { inherit inputs; } {
      systems = [
        "x86_64-linux"
        "aarch64-linux"
      ];

      perSystem =
        { pkgs, ... }:
        {
          devShells.default = pkgs.mkShell {
            packages = [
              pkgs.qmk
              pkgs.gcc-arm-embedded
              pkgs.gnumake
              pkgs.git
              pkgs.python3
            ];
            # Build against the pinned vial-qmk submodule and this userspace
            shellHook = ''
              export QMK_HOME="$PWD/qmk_firmware"
              export QMK_USERSPACE="$PWD"
            '';
          };
        };
    };
}
