#define __keys_c
#include "includeAll.h"
//=============================================================================
//按键信息获取
void GetKeys() {
	static uint8_t tempKeyValue1 = D_keyNull;
        static uint8_t tempKeyValue2 = D_keyNull;
	static uint8_t tempKeyValue3 = D_keyNull;

        delayMs(20);
        P3MODH &= P34MOD_Mask;
        P3MODL &= P32MOD_Mask;
        P1MODH &= P17MOD_Mask;
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
	if(P_key2 == 0){
		tempKeyValue2 = D_keyValue1;
	}	else{
		keyValue2 = tempKeyValue2;
		tempKeyValue2 = D_keyNull;
	}
	if(P_key3 == 0){
		tempKeyValue3 = D_keyValue1;
	}	else{
		keyValue3 = tempKeyValue3;
		tempKeyValue3 = D_keyNull;
	}
	P3MODH |= P34MOD_2;
}