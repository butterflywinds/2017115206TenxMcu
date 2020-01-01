#define __main_c
#include "includeAll.h"
//=============================================================================

void main() {
  
  SysInit();
  VarsInit();
	
	F_turnOnWDT();

	P_buzz = 0;

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
	}
//============================================================================

	void TaskSetting(){} 
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

