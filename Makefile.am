AUTOMAKE_OPTIONS = foreign

# Projects subdirectories
SUBDIRS = src

# DOXYGEN SUPPORT
# include $(top_srcdir)/aminclude.am

# Uncomment if you use Intltool
# INTLTOOL_FILES = intltool-extract.in \
#	intltool-merge.in \
#	intltool-update.in

# ensure the distribution of the doxygen configuration file
EXTRA_DIST = autogen.sh

# Remove doc directory on uninstall
uninstall-local:
	-rm -r $(docdir)

