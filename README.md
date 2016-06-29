Material Design Qt-Client Side Decorations
==========================================

[![ZenHub.io](https://img.shields.io/badge/supercharged%20by-zenhub.io-blue.svg)](https://zenhub.io)

[![License](https://img.shields.io/github/license/papyros/material-qt-decorations.svg)](https://github.com/papyros/material-qt-decorations)
[![GitHub release](https://img.shields.io/github/release/papyros/material-qt-decorations.svg)](https://github.com/papyros/material-qt-decorations)
[![Build Status](https://travis-ci.org/papyros/material-qt-decorations.svg?branch=develop)](https://travis-ci.org/papyros/material-qt-decorations)
[![GitHub issues](https://img.shields.io/github/issues/papyros/material-qt-decorations.svg)](https://github.com/papyros/material-qt-decorations)
[![Maintained](https://img.shields.io/maintenance/yes/2016.svg)](https://github.com/papyros/material-qt-decorations/commits/develop)

### Installation

From the root of the repository, run:

    mkdir build; cd build
    cmake .. -DCMAKE_INSTALL_PREFIX=/usr -DQML_INSTALL_DIR=lib/qt/qml
    make
    make install # use sudo if necessary

### Usage

When using a Wayland session, set the environmental variable `QT_WAYLAND_DECORATION` to `material`, and newly launched applications will start up with the Material Design decorations instead of the default bradient decorations.

To change the window decoration color, add the following import to your QML file:

    import io.papyros.decorations 0.1

And add the following code:

    WindowDecorations {
        window: idOfYourWindow
        backgroundColor: "your-color"
        textColor: "your-color"
        iconColor: "your-color"
    }

Check out [QML Material](https://github.com/papyros/qml-material) for a Material Design framework for QtQuick that automatically sets the decoration color to the primary dark color to correspond to the primary color of the toolbar.

### Licensing

Material Qt Decorations is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser Public License as published by the Free Software Foundation; either version 2.1 of the License, or (at your option) any later version.
