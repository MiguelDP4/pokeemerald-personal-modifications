#ifndef GUARD_SHOP_H
#define GUARD_SHOP_H

extern struct ItemSlot gMartPurchaseHistory[3];

void CreatePokemartMenu(const u16 *itemsForSale);
void CreateDecorationShop1Menu(const u16 *itemsForSale);
void CreateDecorationShop2Menu(const u16 *itemsForSale);
void CB2_ExitSellMenu(void);
void LilycoveDeptStore_4F_ClerkLeft(void);
void LilycoveDeptStore_4F_ClerkRight(void);

#endif // GUARD_SHOP_H
