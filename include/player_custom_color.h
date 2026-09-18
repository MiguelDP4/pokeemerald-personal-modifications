#ifndef GUARD_PLAYER_CUSTOM_COLOR_H
#define GUARD_PLAYER_CUSTOM_COLOR_H

#include "global.h"

#define PLAYER_PAL_HIGHLIGHT_INDEX 10
#define PLAYER_PAL_SHADOW_INDEX    11

bool8 IsPlayerOutfitCustomized(void);
void GetDefaultOutfitColors(u8 gender, u8 *r, u8 *g, u8 *b);
void SetPlayerOutfitColors(u8 r, u8 g, u8 b);
u16 GetPlayerHighlightColor(void);
u16 GetPlayerShadowColor(void);
u16 GetPlayerReflectionHighlightColor(void);
u16 GetPlayerReflectionShadowColor(void);
void ApplyPlayerCustomColorsToObjSlot(u8 paletteSlot);
void ApplyPlayerCustomColorsToReflectionSlot(u8 paletteSlot);
void ApplyPlayerCustomColorsToBuffer(u16 *palette);

#endif // GUARD_PLAYER_CUSTOM_COLOR_H
