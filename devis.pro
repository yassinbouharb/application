 #-------------------------------------------------
#
# Project created by QtCreator 2019-11-05T14:29:43
#
#-------------------------------------------------

QT       += core gui sql network \
            multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = devis
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    connexion.cpp \
    ajouterdevis.cpp \
    depenses.cpp \
    devis.cpp \
    ajouterdepenses.cpp \
    devisafficher.cpp \
    banquedialogue.cpp \
    afficherdepenses.cpp \
    traitementdonnees.cpp \
    supprimer.cpp \
    mail.cpp \
    modifierdevis.cpp \
    modifier.cpp \
    modifierfacture.cpp \
    qcustomplot.cpp \
    telecharger.cpp \
    creeruncomptebanque.cpp \
    musique.cpp \
    smtp.cpp

HEADERS += \
        mainwindow.h \
    connexion.h \
    ajouterdevis.h \
    depenses.h \
    devis.h \
    ajouterdepenses.h \
    devisafficher.h \
    banquedialogue.h \
    afficherdepenses.h \
    traitementdonnees.h \
    supprimer.h \
    mail.h \
    modifierdevis.h \
    modifier.h \
    modifierfacture.h \
    qcustomplot.h \
    telecharger.h \
    creeruncomptebanque.h \
    musique.h \
    smtp.h

FORMS += \
        mainwindow.ui \
    ajouterdevis.ui \
    ajouterdepenses.ui \
    devisafficher.ui \
    banquedialogue.ui \
    afficherdepenses.ui \
    traitementdonnees.ui \
    supprimer.ui \
    mail.ui \
    modifierdevis.ui \
    modifier.ui \
    modifierfacture.ui \
    telecharger.ui \
    creeruncomptebanque.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    download.jpg \
    5.jpg \
    icon/1.jpg \
    icon/3 (1).jpg \
    icon/3 (2).jpg \
    icon/45.jpg \
    icon/5.jpg \
    icon/download.jpg \
    icon/g.jpg \
    icon/1.png \
    icon/4.png \
    icon/images.png \
    icon/3 (2).jpg \
    icon/annuler.jpg \
    icon/depenses.jpg \
    icon/depensesaff.jpg \
    icon/devis.jpg \
    icon/download.jpg \
    icon/telecharger.jpg \
    icon/traitement.jpg \
    icon/banque.png \
    icon/e.png \
    icon/mail.png

RESOURCES +=
