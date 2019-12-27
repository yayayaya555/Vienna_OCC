#include "DSP28x_Project.h"     // Device Headerfile and Examples Include File
#include "math.h"
#include "sci.h"

//  void sci_init(void);
//  interrupt void uartIsr(void);
//  interrupt void uart_send(void);
  // void delay(void);

unsigned char  re_data[5]={0,0,0,0,0};  // count=0,i,temp,m;
  // unsigned char  sin1[2000];
long temp_kp = 0, temp_ki = 0, temp_kd = 0;
 float32 KP=0.5,KI=0.02;
 float32 Um;
 Uint16 m=1;
/*
void main(void)
{
    InitSysCtrl();
    DINT;
    IER = 0x0000;
    IFR = 0x0000;
    InitPieCtrl();
    InitPieVectTable();
    EnableInterrupts();
   InitScicGpio();
    sci_init();
    EALLOW;
    PieVectTable.SCIRXINTC = &uartIsr;
    PieVectTable.SCITXINTC = &uart_send;
    EDIS;
    PieCtrlRegs.PIECTRL.bit.ENPIE=1;
    PieCtrlRegs.PIEIER8.bit.INTx5=1;
    PieCtrlRegs.PIEIER8.bit.INTx6=1;
    IER|=M_INT8;
    EINT;
    ERTM;

    for(i=0;i<2000;i++)
  		{
  			sin1[i]=120*sin(2*3.1415926*(0.0005)*i)+120;
  		}

    while(1);
}
*/
    void sci_init(void)
    {
        EALLOW;
        ScicRegs.SCICCR.all =0x0007;
        ScicRegs.SCICTL1.all =0x0003;
    //  ScicRegs.SCICTL2.all =0x0003;
        ScicRegs.SCICTL2.bit.TXINTENA=1;
        ScicRegs.SCICTL2.bit.RXBKINTENA=1;
         ScicRegs.SCIHBAUD    =0x0001;
         ScicRegs.SCILBAUD    =0x00e7;
        ScicRegs.SCICTL1.bit.SWRESET=1;
        EDIS;
    }
    void uart_send(void)
    {
        PieCtrlRegs.PIEACK.all=PIEACK_GROUP8;
    }
    void uartIsr(void)
    {
    	static unsigned char re_i=0;

    	re_data[re_i++]=ScicRegs.SCIRXBUF.all;
        if(re_i>=5)
           {
        			re_i=0;
/*        		  if(re_data[0] == 0x01)
        		        {
        		        	re_i=0;
        		        	ScicRegs.SCITXBUF=0x02;
        		        	 while (ScicRegs.SCICTL2.bit.TXRDY == 0) {}
        		        	ScicRegs.SCITXBUF=0x00;
        		        	 while (ScicRegs.SCICTL2.bit.TXRDY == 0) {}
        		        	ScicRegs.SCITXBUF=sin1[count];
        		        	 while (ScicRegs.SCICTL2.bit.TXRDY == 0) {}
        		        	temp=sin1[count];
        		        	count++;
        		        	if(count==2000)
        		        	   {
        		        		count=0;
        		               ScicRegs.SCICTL2.bit.RXBKINTENA=0;
        		        	   }
        		        	}*/
        		        if(re_data[0] == 0x02)
        		            {
        		        	temp_kp = re_data[1]*16777216+re_data[2]*65536+re_data[3]*256+re_data[4];
        		        	KP=(float32)temp_kp/1000000;
        		        	Um=0;
        		            }
        		        if(re_data[0] == 0x03)
        		            {
        		            temp_ki = re_data[1]*16777216+re_data[2]*65536+re_data[3]*256+re_data[4];
        		            KI=(float32)temp_ki/1000000;
        		            Um=0;
        		            }
        		        if(re_data[0] == 0x04)
        		            {
        		            temp_kd = re_data[1]*16777216+re_data[2]*65536+re_data[3]*256+re_data[4];
        		            m=(Uint16)(temp_kd/1000000);
        		            }
        		        if(re_data[0] == 0x05)
        		            {
        		            temp_kd = re_data[1]*16777216+re_data[2]*65536+re_data[3]*256+re_data[4];
        		            }
        		        if(re_data[0] == 0x06)
        		            {
        		            temp_kd = re_data[1]*16777216+re_data[2]*65536+re_data[3]*256+re_data[4];
        		            }
        		        if(re_data[0] == 0x07)
        		            {
        		            temp_kd = re_data[1]*16777216+re_data[2]*65536+re_data[3]*256+re_data[4];
        		            }
            		}

//        ScicRegs.SCITXBUF=m;
        PieCtrlRegs.PIEACK.all=PIEACK_GROUP8;
    }
