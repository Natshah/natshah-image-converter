TEMPLATE = app
CONFIG += release warn_on
DESTDIR = bin
OBJECTS_DIR = build
MOC_DIR = build
UI_DIR = build
FORMS = ui/MianDialog.ui
HEADERS = src/maindialogimpl.h
SOURCES = src/maindialogimpl.cpp src/main.cpp
RESOURCES += prog.qrc
prog.qrc =
