SUMMARY = "bitbake-layers recipe"
DESCRIPTION = "NMC3 Core Image"
LICENSE = "MIT"
IMAGE_FSTYPES += "squashfs"

python do_build() {
    bb.plain("***********************************************");
    bb.plain("*                                             *");
    bb.plain("*  Example recipe created by bitbake-layers   *");
    bb.plain("*                                             *");
    bb.plain("***********************************************");
}

python do_compile() {
    bb.plain("***********************************************");
    bb.plain("*                                             *");
    bb.plain("*  Create NMC3 Core Image                     *");
    bb.plain("*                                             *");
    bb.plain("***********************************************");
}

inherit core-image
