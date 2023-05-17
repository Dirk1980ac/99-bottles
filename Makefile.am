# Projects subdirectories
SUBDIRS = src
EXTRA_DIST = $(top_srcdir)/build-aux/git-version-gen \
	$(top_srcdir)/autogen.sh


ACLOCAL_AMFLAGS = --install -I m4

$(top_srcdir)/.version:
	echo $(VERSION) > $@-t && mv $@-t $@
dist-hook:
	echo $(VERSION) > $(distdir)/.tarball-version

dist_doc_DATA = \
	README.md \
	COPYING \
	AUTHORS \
	INSTALL \
	NEWS

# Remove doc directory on uninstall
uninstall-local:
	-rm -r $(docdir)

