#define __main_c
#include "includeAll.h"

bit smgval=0;

void main() {
  
  SysInit();
  VarsInit();
	
	F_turnOnWDT();

	P_buzz = 0;
        P_ledcom=0;
	F_ledOff1();
	F_ledOff2();
	delayMs(500);

	while(1){
		
		F_clearWDT();
		
		TimeProcess();
		TaskSetting();
		TaskProcess();
		DisplayProcess();
	    
	}
}

//=============================================================================
	void TimeProcess(){
		
		if (b1ms) {
			
			b1ms = 0;
			timer5ms++;
		}
                if (timer5ms >= 5) {
            	
			GetKeys();
		}		
	}
//============================================================================

	void TaskSetting(){
            if (D_keyValue1==keyValue1)
		{
		   smg_init();
			buzzCounter=1000;
			
			if (smgval==0)
			{
				smg_double(0x3f,0x71);
				smgval=1;
			}else
			{
				
				smg_close();
				smgval=0;
			}
			KeyInit();
			led_init();
		}
            if(D_keyValue1==keyValue2){
			buzzCounter=1000;
			F_ledNeg1();
		}
            if(D_keyValue1==keyValue3){
                        buzzCounter=1000;
			F_ledNeg2();
		}
} 
//=============================================================================
	void TaskProcess(){}
//=============================================================================
	void DisplayProcess(){}
//=============================================================================

void delayMs(uint16_t time){
	uint16_t i,j;
	for(i=0; i<time; i++){
		for(j=0; j<1000; j++){
			F_clearWDT();
		}
	}
}

