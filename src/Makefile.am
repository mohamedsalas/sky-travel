## Process this file with automake to produce Makefile.in

INCLUDES = \
	-DPACKAGE_DATA_DIR=\""$(datadir)"\" \
	-DPACKAGE_LOCALE_DIR=\""$(prefix)/$(DATADIRNAME)/locale"\" \
	@PACKAGE_CFLAGS@

bin_PROGRAMS = sky-travel

sky_travel_SOURCES = \
	main.c \
	support.c support.h \
	interface.c interface.h \
	callbacks.c callbacks.h \
	verif.c verif.h \
	agents.c agents.h \
	clients.c clients.h \
	lv.c lv.h \
	heb.c heb.h \
	vol.c vol.h \
	vo.c vo.h \
	lvp.c lvp.h \
	hebp.c hebp.h \
	volp.c volp.h \
	vop.c vop.h

sky_travel_LDADD = @PACKAGE_LIBS@ $(INTLLIBS)

