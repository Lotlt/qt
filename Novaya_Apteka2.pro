QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    obnovlenie2.cpp \
    obnovlenie3.cpp \
    obnovlenie_1.cpp \
    okno.cpp \
    okno3.cpp \
    okno_2.cpp \
    registraciya.cpp \
    vhod.cpp

HEADERS += \
    mainwindow.h \
    obnovlenie2.h \
    obnovlenie3.h \
    obnovlenie_1.h \
    okno.h \
    okno3.h \
    okno_2.h \
    registraciya.h \
    vhod.h

FORMS += \
    mainwindow.ui \
    obnovlenie2.ui \
    obnovlenie3.ui \
    obnovlenie_1.ui \
    okno.ui \
    okno3.ui \
    okno_2.ui \
    registraciya.ui \
    vhod.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
