#	@(#)Makefile	8.1 (Berkeley) 6/8/93
#	$NetBSD: Makefile,v 1.32 2019/12/24 23:41:05 uwe Exp $

# IF YOU ADD TO MSRCS, MAKE SURE YOU UPDATE `CATDEPS' IN bsd.man.mk!
MSRCS=	doc2html
MMACS=  ${MSRCS:S@$@.tmac@g}
INCS=	${MMACS}
INCSDIR=${BINDIR}/tmac
CLEANFILES+= ${MMACS}

TMACDIR?=${.CURDIR}
STRIP_SED = ${TMACDIR}/../me/strip.sed

realall:	${MMACS}

.for i in ${MSRCS}
$i.tmac: $i
	${_MKTARGET_CREATE}
	${TOOL_SED} -f ${STRIP_SED} < ${.ALLSRC} > ${.TARGET}
.endfor

.include <bsd.prog.mk>
