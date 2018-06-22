DEFAULTTUNE ?= "cortexa7thf-vfpv4-d16"

require conf/machine/include/tune-cortexa7.inc

TUNEVALID[vfpv4-d16] = "Enable Vector Floating Point Version 4 (vfpv4-d16) unit."
TUNE_CCARGS_MFPU += "${@bb.utils.contains("TUNE_FEATURES", "vfpv4-d16", " vfpv4-d16", "", d)}"

AVAILTUNES += "cortexa7thf-vfpv4-d16"
ARMPKGARCH_tune-cortexa7thf-vfpv4-d16 = "cortexa7"
TUNE_FEATURES_tune-cortexa7thf-vfpv4-d16 = "${TUNE_FEATURES_tune-armv7athf} vfpv4-d16"
PACKAGE_EXTRA_ARCHS_tune-cortexa7thf-vfpv4-d16 = "${PACKAGE_EXTRA_ARCHS_tune-armv7athf} cortexa7hf-vfpv4-d16"

