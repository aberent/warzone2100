%.tab.hpp %.tab.cpp:: %.y
	$(YACC) $(YFLAGS) $(AM_YFLAGS) -o$@ $<

%.lex.hpp %.lex.cpp:: %.l
	$(LEX) $(LFLAGS) $(AM_LFLAGS) -o$@ $<

AM_CPPFLAGS = -DYY_NO_INPUT $(PHYSFS_CFLAGS) $(PNG_CFLAGS) $(OGGVORBIS_CFLAGS) $(OPENAL_CFLAGS) $(OPENGLC_CFLAGS) $(OPENGL_CFLAGS) $(WZ_CPPFLAGS) $(GLEW_CFLAGS)
AM_CFLAGS = $(WZ_CFLAGS)
AM_CXXFLAGS = $(WZ_CXXFLAGS) $(QT4_CFLAGS)
AM_LFLAGS = $(FLEX_FLAGS)
AM_YFLAGS = -d

version.o: autorevision.h

autorevision.h: $(warzone2100_SOURCES) $(warzone2100_LIBS)
	(cd $(top_srcdir) && ./build_tools/autorevision.sh $(abs_top_builddir)/src/autorevision.h || true)

BUILT_SOURCES = \
	autorevision.h \
	level_lexer.lex.cpp \
	message_lexer.lex.cpp \
	message_parser.tab.cpp \
	message_parser.tab.hpp \
	scriptvals_lexer.lex.cpp \
	scriptvals_parser.tab.cpp \
	scriptvals_parser.tab.hpp

CLEANFILES = $(BUILT_SOURCES)

EXTRA_DIST = \
	autorevision.h \
	message_lexer.l \
	message_parser.y \
	scriptvals_lexer.l \
	scriptvals_parser.y \
	level_lexer.l

bin_PROGRAMS = warzone2100
noinst_HEADERS = \
	action.h \
	actiondef.h \
	advvis.h \
	ai.h \
	anim_id.h \
	astar.h \
	atmos.h \
	basedef.h \
	baseobject.h \
	bridge.h \
	bucket3d.h \
	cheat.h \
	challenge.h \
	clparse.h \
	cluster.h \
	cmddroiddef.h \
	cmddroid.h \
	combat.h \
	component.h \
	configuration.h \
	console.h \
	data.h \
	design.h \
	difficulty.h \
	display3ddef.h \
	display3d.h \
	displaydef.h \
	display.h \
	drive.h \
	droiddef.h \
	droid.h \
	e3demo.h \
	edit3d.h \
	effects.h \
	featuredef.h \
	feature.h \
	fpath.h \
	frend.h \
	frontend.h \
	functiondef.h \
	function.h \
	game.h \
	gateway.h \
	geometry.h \
	group.h \
	hci.h \
	ingameop.h \
	init.h \
	intdisplay.h \
	intelmap.h \
	intfac.h \
	intimage.h \
	intorder.h \
	keybind.h \
	keyedit.h \
	keymap.h \
	levelint.h \
	levels.h \
	lighting.h \
	loadsave.h \
	loop.h \
	main.h \
	mapdisplay.h \
	mapgrid.h \
	map.h \
	mechanics.h \
	messagedef.h \
	message.h \
	messagely.h \
	message_parser.tab.hpp \
	miscimd.h \
	missiondef.h \
	mission.h \
	modding.h \
	movedef.h \
	move.h \
	multigifts.h \
	multiint.h \
	multijoin.h \
	multilimit.h \
	multimenu.h \
	multiplay.h \
	multirecv.h \
	multistat.h \
	objectdef.h \
	objects.h \
	objmem.h \
	oprint.h \
	orderdef.h \
	order.h \
	parsetest.h \
	pointtree.h \
	positiondef.h \
	power.h \
	projectiledef.h \
	projectile.h \
	qtscript.h \
	qtscriptfuncs.h \
	radar.h \
	random.h \
	raycast.h \
	researchdef.h \
	research.h \
	scores.h \
	scriptai.h \
	scriptcb.h \
	scriptextern.h \
	scriptfuncs.h \
	scriptobj.h \
	scripttabs.h \
	scriptvals.h \
	scriptvals_parser.tab.hpp \
	selection.h \
	seqdisp.h \
	statsdef.h \
	stats.h \
	stringdef.h \
	structuredef.h \
	structure.h \
	terrain.h \
	text.h \
	texture.h \
	transporter.h \
	visibility.h \
	version.h \
	warcam.h \
	warzoneconfig.h \
	wavecast.h \
	weapondef.h \
	wrappers.h

warzone2100_SOURCES = \
	action.cpp \
	advvis.cpp \
	ai.cpp \
	astar.cpp \
	atmos.cpp \
	aud.cpp \
	baseobject.cpp \
	bridge.cpp \
	bucket3d.cpp \
	challenge.cpp \
	cheat.cpp \
	clparse.cpp \
	cluster.cpp \
	cmddroid.cpp \
	combat.cpp \
	component.cpp \
	configuration.cpp \
	console.cpp \
	data.cpp \
	design.cpp \
	difficulty.cpp \
	display3d.cpp \
	display.cpp \
	drive.cpp \
	droid.cpp \
	e3demo.cpp \
	edit3d.cpp \
	effects.cpp \
	feature.cpp \
	fpath.cpp \
	frontend.cpp \
	function.cpp \
	game.cpp \
	gateway.cpp \
	geometry.cpp \
	group.cpp \
	hci.cpp \
	ingameop.cpp \
	init.cpp \
	intdisplay.cpp \
	intelmap.cpp \
	intimage.cpp \
	intorder.cpp \
	keybind.cpp \
	keyedit.cpp \
	keymap.cpp \
	level_lexer.lex.cpp \
	levels.cpp \
	lighting.cpp \
	loadsave.cpp \
	loop.cpp \
	main.cpp \
	map.cpp \
	mapdisplay.cpp \
	mapgrid.cpp \
	mechanics.cpp \
	message.cpp \
	message_lexer.lex.cpp \
	message_parser.tab.cpp \
	miscimd.cpp \
	mission.cpp \
	move.cpp \
	multibot.cpp \
	multigifts.cpp \
	multiint.cpp \
	multijoin.cpp \
	multilimit.cpp \
	multimenu.cpp \
	multiopt.cpp \
	multiplay.cpp \
	multistat.cpp \
	multistruct.cpp \
	multisync.cpp \
	objects.cpp \
	objmem.cpp \
	oprint.cpp \
	order.cpp \
	parsetest.cpp \
	pointtree.cpp \
	power.cpp \
	projectile.cpp \
	qtscript.cpp \
	qtscriptfuncs.cpp \
	radar.cpp \
	random.cpp \
	raycast.cpp \
	research.cpp \
	scores.cpp \
	scriptai.cpp \
	scriptcb.cpp \
	scriptextern.cpp \
	scriptfuncs.cpp \
	scriptobj.cpp \
	scripttabs.cpp \
	scriptvals.cpp \
	scriptvals_lexer.lex.cpp \
	scriptvals_parser.tab.cpp \
	selection.cpp \
	seqdisp.cpp \
	stats.cpp \
	structure.cpp \
	terrain.cpp \
	text.cpp \
	texture.cpp \
	transporter.cpp \
	version.cpp \
	visibility.cpp \
	warcam.cpp \
	warzoneconfig.cpp \
	wavecast.cpp \
	wrappers.cpp

warzone2100_LIBS = \
	$(top_builddir)/lib/widget/libwidget.a \
	$(top_builddir)/lib/qtgame/libqtgame.a \
	$(top_builddir)/lib/sequence/libsequence.a \
	$(top_builddir)/lib/sound/libsound.a \
	$(top_builddir)/lib/script/libscript.a \
	$(top_builddir)/lib/netplay/libnetplay.a \
	$(top_builddir)/lib/ivis_opengl/libivis_opengl.a \
	$(top_builddir)/lib/gamelib/libgamelib.a \
	$(top_builddir)/lib/framework/libframework.a \
	$(top_builddir)/lib/exceptionhandler/libexceptionhandler.a \
	$(top_builddir)/3rdparty/miniupnpc/libminiupnpc.a

warzone2100_LDADD = $(warzone2100_LIBS) $(LTLIBINTL) $(PHYSFS_LIBS) $(PNG_LIBS) $(OGGVORBIS_LIBS) \
	$(THEORA_LIBS) $(OPENAL_LIBS) $(OPENGLC_LIBS) $(OPENGL_LIBS) $(QT4_LIBS) $(GLEW_LIBS) \
	$(X_LIBS) $(X_EXTRA_LIBS)

if MINGW32
warzone2100_LDADD += $(top_builddir)/win32/warzone2100.o $(WIN32_LIBS)
endif
