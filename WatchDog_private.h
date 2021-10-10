#ifndef WATCHDOG_PRIVATE_H_
#define WATCHDOG_PRIVATE_H_


#define WDTCR *((volatile u8*)0x41)
#define WDTOE  4
#define   WDE  3
#define WDP2   2
#define WDP1   1
#define WDP0   0


#define TIME1   1
#define TIME2   2
#define TIME3   3
#define TIME4   4
#define TIME5   5
#define TIME6   6
#define TIME7   7
#define TIME8   8

#endif