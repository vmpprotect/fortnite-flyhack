#include "decrypt.h"

//example
void* FlyObject = *(void**)(FortniteClient + 0x2DD128E);
void* DecryptedFlyObject = decrypt_flyhack(FlyObject);
*(bool*)(DecryptedFlyObject + 0x10B4) = true;
