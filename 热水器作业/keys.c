#define __keys_c
#include "includeAll.h"
//=============================================================================
//按键信息获取
void GetKeys() {
	static uint8_t tempKeyValue1 = D_keyNull;

        delayMs(20);
        P3MODH &= P34MOD_Mask;

	_nop_();
	_nop_();
	_nop_();
        _nop_();
        _nop_();
	if(P_key1 == 0){
		tempKeyValue1 = D_keyValue1;
	}	else{
		keyValue1 = tempKeyValue1;
		tempKeyValue1 = D_keyNull;
	}
	
	P3MODH |= P34MOD_2;
}