#ifndef __CAN_H
#define __CAN_H

#if (0 != HAVE_CAN)

/*
*******************************************************************************
**  Macro define
*******************************************************************************
*/

#define CAN_ID1				0x00000000 //0x10FF0000
#define CAN_ID2				0x00000000 //0x1BFFFE88


/*
*******************************************************************************
**  Structure define
*******************************************************************************
*/


/*
*******************************************************************************
**  Function define
*******************************************************************************
*/

extern void CAN_Timer100ms(void);
extern void CAN_SetFilterId(CAN_FilterTypeDef* sFilterConfig, uint8_t ide, uint32_t id, uint32_t mask);

extern void CAN1_SetFilter(void);
extern uint8_t* CAN1_Rx(void);
extern void CAN1_Tx_Test(void);
extern void CAN1_Start(void);
extern void CAN1_Stop(void);
extern void CAN1_SetPort(uint8_t gpio);

extern void CAN_LongShortKeyProcess(void);

/*
*******************************************************************************
**  Extern Variable
*******************************************************************************
*/

extern uint8_t CanWatchTimer100ms;
extern uint8_t CanWatchTimer1s;
extern uint8_t CanSleepTimer100ms;
extern uint8_t CanSleep;
extern uint8_t CanAcc;
extern uint8_t CanCheck;

#endif /* HAVE_CAN */

#endif // __CAN_H
