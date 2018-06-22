SHELL=/bin/bash

POKY_ROOT:=.

rzn1-nmc3-shell:
	source ${POKY_ROOT}/oe-init-build-env build_rzn1_nmc3 && bash -i

