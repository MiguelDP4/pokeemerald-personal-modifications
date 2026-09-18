#include "global.h"
#include "player_custom_color.h"
#include "palette.h"
#include "constants/rgb.h"

// Default highlights
#define BRENDAN_DEFAULT_R 69
#define BRENDAN_DEFAULT_G 66
#define BRENDAN_DEFAULT_B 255

#define MAY_DEFAULT_R 248
#define MAY_DEFAULT_G 88
#define MAY_DEFAULT_B 136

bool8 IsPlayerOutfitCustomized(void)
{
    return (gSaveBlock2Ptr->playerOutfitCustomized != 0);
}

void GetDefaultOutfitColors(u8 gender, u8 *r, u8 *g, u8 *b)
{
    if (gender == MALE)
    {
        *r = BRENDAN_DEFAULT_R;
        *g = BRENDAN_DEFAULT_G;
        *b = BRENDAN_DEFAULT_B;
    }
    else
    {
        *r = MAY_DEFAULT_R;
        *g = MAY_DEFAULT_G;
        *b = MAY_DEFAULT_B;
    }
}

void SetPlayerOutfitColors(u8 r, u8 g, u8 b)
{
    gSaveBlock2Ptr->playerOutfitR = r;
    gSaveBlock2Ptr->playerOutfitG = g;
    gSaveBlock2Ptr->playerOutfitB = b;
    gSaveBlock2Ptr->playerOutfitCustomized = TRUE;
}

static void GetCurrentRGB(u8 *r, u8 *g, u8 *b)
{
    if (!IsPlayerOutfitCustomized())
    {
        GetDefaultOutfitColors(gSaveBlock2Ptr->playerGender, r, g, b);
    }
    else
    {
        *r = gSaveBlock2Ptr->playerOutfitR;
        *g = gSaveBlock2Ptr->playerOutfitG;
        *b = gSaveBlock2Ptr->playerOutfitB;
    }
}

u16 GetPlayerHighlightColor(void)
{
    u8 r, g, b;
    GetCurrentRGB(&r, &g, &b);
    return RGB(r >> 3, g >> 3, b >> 3);
}

u16 GetPlayerShadowColor(void)
{
    u8 r, g, b;
    u8 sr, sg, sb;
    GetCurrentRGB(&r, &g, &b);
    sr = (r * 70) / 100;
    sg = (g * 70) / 100;
    sb = (b * 70) / 100;
    return RGB(sr >> 3, sg >> 3, sb >> 3);
}

u16 GetPlayerReflectionHighlightColor(void)
{
    u8 r, g, b;
    u8 rr, rg, rb;
    GetCurrentRGB(&r, &g, &b);
    // Blend with water cyan (RGB 120, 200, 210)
    rr = (r * 60 + 120 * 40) / 100;
    rg = (g * 60 + 200 * 40) / 100;
    rb = (b * 60 + 210 * 40) / 100;
    return RGB(rr >> 3, rg >> 3, rb >> 3);
}

u16 GetPlayerReflectionShadowColor(void)
{
    u8 r, g, b;
    u8 rr, rg, rb;
    GetCurrentRGB(&r, &g, &b);
    rr = ((r * 60 + 120 * 40) / 100 * 70) / 100;
    rg = ((g * 60 + 200 * 40) / 100 * 70) / 100;
    rb = ((b * 60 + 210 * 40) / 100 * 70) / 100;
    return RGB(rr >> 3, rg >> 3, rb >> 3);
}

void ApplyPlayerCustomColorsToObjSlot(u8 paletteSlot)
{
    u16 offset = OBJ_PLTT_ID(paletteSlot);
    u16 highlight = GetPlayerHighlightColor();
    u16 shadow = GetPlayerShadowColor();

    gPlttBufferUnfaded[offset + PLAYER_PAL_HIGHLIGHT_INDEX] = highlight;
    gPlttBufferUnfaded[offset + PLAYER_PAL_SHADOW_INDEX] = shadow;
    gPlttBufferFaded[offset + PLAYER_PAL_HIGHLIGHT_INDEX] = highlight;
    gPlttBufferFaded[offset + PLAYER_PAL_SHADOW_INDEX] = shadow;
}

void ApplyPlayerCustomColorsToReflectionSlot(u8 paletteSlot)
{
    u16 offset = OBJ_PLTT_ID(paletteSlot);
    u16 highlight = GetPlayerReflectionHighlightColor();
    u16 shadow = GetPlayerReflectionShadowColor();

    gPlttBufferUnfaded[offset + PLAYER_PAL_HIGHLIGHT_INDEX] = highlight;
    gPlttBufferUnfaded[offset + PLAYER_PAL_SHADOW_INDEX] = shadow;
    gPlttBufferFaded[offset + PLAYER_PAL_HIGHLIGHT_INDEX] = highlight;
    gPlttBufferFaded[offset + PLAYER_PAL_SHADOW_INDEX] = shadow;
}

void ApplyPlayerCustomColorsToBuffer(u16 *palette)
{
    palette[PLAYER_PAL_HIGHLIGHT_INDEX] = GetPlayerHighlightColor();
    palette[PLAYER_PAL_SHADOW_INDEX] = GetPlayerShadowColor();
}
