dnl Autoconf configuration

AC_INIT(99-bottles, m4_esyscmd([build-aux/git-version-gen .tarball-version]), 
        [Dirk Gottschalk <dirk.gottschalk1980-2022@googlemail.com>])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_AUX_DIR([build-aux])
AM_INIT_AUTOMAKE([1.11] [subdir-objects])
AM_SILENT_RULES([yes])
AM_MAINTAINER_MODE([enable])
AC_CONFIG_MACRO_DIRS([m4])
AC_PROG_CC

dnl ***************************************************************************
dnl Generate build environment
dnl ***************************************************************************
AC_CONFIG_FILES([Makefile \
                 src/Makefile])
AC_OUTPUT
