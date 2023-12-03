#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include <util/delay.h>

#include "DIO_interface.h"
#include "CLCD_interface.h"
#include "CLCD_prv.h"
#include "CLCD_cfg.h"

void CLCD_voidSendCmd(uint8 Copy_u8Cmd);
void CLCD_voidSendData(uint8 Copy_u8Data);

void CLCD_voidInit(void);
