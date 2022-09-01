// Copyright 2022 Kristian Andersen (@Grim1)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
 #define KNO KC_NO

 #define LAYOUT_tkl_ansi(\
    K00,      K02, K03, K04, K05,      K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, K0G, K0H,  \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D,      K1F, K1G, K1H,  \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D,      K2F, K2G, K2H,  \
    K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,      K3D,                      \
    K40,      K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C,                K4G,       \
    K50, K51, K52,                K56,                K5A, K5B, K5C, K5D,      K5F, K5G, K5H   \
) { \
    {K00, KNO, K02, K03, K04, K05, KNO, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, K0G, K0H}, \
    {K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, KNO, K1F, K1G, K1H}, \
    {K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, KNO, K2F, K2G, K2H}, \
    {K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, KNO, K3D, K00, KNO, KNO, KNO}, \
    {K40, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C, KNO, KNO, KNO, KNO, K4G, KNO}, \
    {K50, K51, K52, KNO, KNO, KNO, K56, KNO, KNO, KNO, K5A, K5B, K5C, K5D, KNO, K5F, K5G, K5H}  \
}

 
