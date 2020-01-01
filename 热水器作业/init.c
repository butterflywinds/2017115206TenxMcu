#define __init_c
#include "includeAll.h"
//=============================================================================
void SysInit() {
	F_clearWDT();
  
  CLKCON = 0x03; // Clock div 1  7.3728Mhz
  STPPCK = 0;
  STPFCK = 0;
  _nop_();
  _nop_();
  _nop_();
  _nop_();
  _nop_();
  SELFCK = 1;
  _nop_();
  _nop_();
  _nop_();
  _nop_();
  _nop_();
  _nop_();
  _nop_();
  _nop_();
  _nop_();
  _nop_();
  // IO �ڳ�ʼ��
	P1MODL = 0xaa;		//��ģʽ����Ϊ�������
	P1MODH = 0xaa;
	//P1MODL = 0xa8;		//��������

  //  7.3728Mhz/2 = 3686400Hz
  //  3686400Hz/3686.4 = 1000Hz = 1ms timer2 
  TH2 = (65536 - 922) / 256;
  RCP2H = TH2;
  TL2 = (65536 - 922) % 256;
  RCP2L = TL2;
  TR2 = 1;
  ET2 = 1;
  EA = 1; 
}
//=============================================================================
void VarsInit() {}



