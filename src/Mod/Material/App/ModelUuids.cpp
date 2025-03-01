/***************************************************************************
 *   Copyright (c) 2023 David Carter <dcarter@david.carter.ca>             *
 *                                                                         *
 *   This file is part of FreeCAD.                                         *
 *                                                                         *
 *   FreeCAD is free software: you can redistribute it and/or modify it    *
 *   under the terms of the GNU Lesser General Public License as           *
 *   published by the Free Software Foundation, either version 2.1 of the  *
 *   License, or (at your option) any later version.                       *
 *                                                                         *
 *   FreeCAD is distributed in the hope that it will be useful, but        *
 *   WITHOUT ANY WARRANTY; without even the implied warranty of            *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU      *
 *   Lesser General Public License for more details.                       *
 *                                                                         *
 *   You should have received a copy of the GNU Lesser General Public      *
 *   License along with FreeCAD. If not, see                               *
 *   <https://www.gnu.org/licenses/>.                                      *
 *                                                                         *
 **************************************************************************/

#include "PreCompiled.h"
#ifndef _PreComp_
#endif

#include "ModelUuids.h"

using namespace Materials;

TYPESYSTEM_SOURCE(Materials::ModelUUIDs, Base::BaseClass)

const QString ModelUUIDs::ModelUUID_Legacy_Father =
    QString::fromStdString("9cdda8b6-b606-4778-8f13-3934d8668e67");
const QString ModelUUIDs::ModelUUID_Legacy_MaterialStandard =
    QString::fromStdString("1e2c0088-904a-4537-925f-64064c07d700");

const QString ModelUUIDs::ModelUUID_Mechanical_Density =
    QString::fromStdString("454661e5-265b-4320-8e6f-fcf6223ac3af");
const QString ModelUUIDs::ModelUUID_Mechanical_IsotropicLinearElastic =
    QString::fromStdString("f6f9e48c-b116-4e82-ad7f-3659a9219c50");
const QString ModelUUIDs::ModelUUID_Mechanical_LinearElastic =
    QString::fromStdString("7b561d1d-fb9b-44f6-9da9-56a4f74d7536");
const QString ModelUUIDs::ModelUUID_Mechanical_OgdenYld2004p18 =
    QString::fromStdString("3ef9e427-cc25-43f7-817f-79ff0d49625f");
const QString ModelUUIDs::ModelUUID_Mechanical_OrthotropicLinearElastic =
    QString::fromStdString("b19ccc6b-a431-418e-91c2-0ac8c649d146");

const QString ModelUUIDs::ModelUUID_Fluid_Default =
    QString::fromStdString("1ae66d8c-1ba1-4211-ad12-b9917573b202");

const QString ModelUUIDs::ModelUUID_Thermal_Default =
    QString::fromStdString("9959d007-a970-4ea7-bae4-3eb1b8b883c7");

const QString ModelUUIDs::ModelUUID_Electromagnetic_Default =
    QString::fromStdString("b2eb5f48-74b3-4193-9fbb-948674f427f3");

const QString ModelUUIDs::ModelUUID_Architectural_Default =
    QString::fromStdString("32439c3b-262f-4b7b-99a8-f7f44e5894c8");

const QString ModelUUIDs::ModelUUID_Costs_Default =
    QString::fromStdString("881df808-8726-4c2e-be38-688bb6cce466");

const QString ModelUUIDs::ModelUUID_Rendering_Basic =
    QString::fromStdString("f006c7e4-35b7-43d5-bbf9-c5d572309e6e");
const QString ModelUUIDs::ModelUUID_Rendering_Texture =
    QString::fromStdString("bbdcc65b-67ca-489c-bd5c-a36e33d1c160");
const QString ModelUUIDs::ModelUUID_Rendering_Advanced =
    QString::fromStdString("c880f092-cdae-43d6-a24b-55e884aacbbf");
const QString ModelUUIDs::ModelUUID_Rendering_Vector =
    QString::fromStdString("fdf5a80e-de50-4157-b2e5-b6e5f88b680e");
