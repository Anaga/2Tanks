#-------------------------------------------------
#
# Project created by QtCreator 2012-09-07T18:17:13
#
#-------------------------------------------------

QT       += core gui

TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp \
    tank.cpp

HEADERS  += mainwindow.h \
    tank.h

FORMS    += mainwindow.ui

RESOURCES += \
    img.qrc
#
#TARGET = 2Tanks
#target.path = /home/pi/2Tanks
#INSTALLS += target

#DEPENDPATH += .
#INCLUDEPATH += .

INCLUDEPATH += ~/opt/rasp-pi-rootfs/usr/local/qt5pi/include/

#DEPLOYMENTFOLDERS = 2Tanks
#for(deploymentfolder, DEPLOYMENTFOLDERS) {
#    item = item$${deploymentfolder}
#    itemsources = $${item}.sources
#    $$itemsources = $$eval($${deploymentfolder}.source)
#    itempath = $${item}.path
#    $$itempath= $$eval($${deploymentfolder}.target)
#    export($$itemsources)
#    export($$itempath)
#    DEPLOYMENT += $$item
#}

#installPrefix = /home/pi/$${TARGET}

#for(deploymentfolder, DEPLOYMENTFOLDERS) {
#    item = item$${deploymentfolder}
#    itemfiles = $${item}.files
#    $$itemfiles = $$eval($${deploymentfolder}.source)
#    itempath = $${item}.path
#    $$itempath = $${installPrefix}/$$eval($${deploymentfolder}.target)
#    export($$itemfiles)
#    export($$itempath)
#    INSTALLS += $$item
#}
#endif
