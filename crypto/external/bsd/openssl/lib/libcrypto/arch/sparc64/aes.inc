.PATH.S: ${.PARSEDIR}
AES_SRCS = aes_core.c aes_cbc.c aes-sparcv9.S aest4-sparcv9.S aesfx-sparcv9.S
AESCPPFLAGS = -DAES_ASM
.include "../../aes.inc"
