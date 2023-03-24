## Process this file with automake to produce Makefile.in



AM_CPPFLAGS = \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\"

AM_CFLAGS =\
	-Wall -Wextra\
	-fdiagnostics-show-option\
	-g\
	-pthread -Idecode
 
bin_PROGRAMS = alchemia

alchemia_SOURCES = \
	main.c \
	alchimie.c \
	alchimie.h \
	decode.h

alchemia_LDADD =  \
	-lrt \
	decode.a
