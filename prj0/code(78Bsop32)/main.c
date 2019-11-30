#define __main_c
#include "includeAll.h"
//=============================================================================
void main() {
  SysInit();
  VarsInit();
  F_ledOn();
  DelayMs(500);
  //使能看门狗
  F_turnOnWDT();
  while (1) {
    //喂狗
    F_clearWDT();
    
	}
}
//=============================================================================
void DelayMs(uint16_t msCount) {
  uint16_t i, j;
  for (i = 0; i < msCount; i++) {
    for (j = 0; j < 1000; j++) {
      /* code */
      F_clearWDT();
    }
  }
}
