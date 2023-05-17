## Process this file with automake to produce Makefile.in

AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR='"$(localedir)"' \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR='"$(pkgdatadir)"' \
	-DSYSCONFDIR='"$(sysconfdir)"' \
	-DLOCALSTATEDIR='"$(localstatedir)"' \
	-DDATADIR='"$(datadir)"'

AM_CFLAGS =\
	 -Wall\
	 -pg

bin_PROGRAMS = 99-bottles

99_bottles_SOURCES = \
	main.c \
	bottles.h

99_bottles_CFLAGS = $(MODNAME_CFLAGS)
99_bottles_LDADD = $(MODNAME_LIBS)
