/*
 * Qt client-side window decorations for Wayland implementing Material Design
 *
 * Copyright (C) 2015-2016 Michael Spencer <sonrisesoftware@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 2.1 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "plugin.h"

#include "windowdecorations.h"

void MaterialPlugin::registerTypes(const char *uri)
{
    // @uri io.papyros.decorations
    Q_ASSERT(uri == QStringLiteral("io.papyros.decorations"));

    qmlRegisterType<WindowDecorations>(uri, 0, 1, "WindowDecorations");
}
