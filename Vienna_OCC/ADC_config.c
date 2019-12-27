/*
 * ADC_config.c
 *
 */

#include "DSP28x_Project.h"

#define ADC_CKPS    0x04   // ADC module clock = HSPCLK/(2^CPS+1)*ADC_CKPS
#define ADCTRL17SET   0
#define ADC_SHCLK  0x00   // S/H width in ADC module periods
#define AVG        19  // Average sample limit
#define ZOFFSET    0x00  // Average Zero offset
#define BUF_SIZE   20  // Sample buffer size


void adc_config()
{
	// Configure ADC
/**/
	AdcRegs.ADCTRL3.bit.ADCCLKPS =ADC_CKPS;
	AdcRegs.ADCTRL1.bit.CPS=ADCTRL17SET;  //ADCCLK=HSPCLK/2^ADCTRL17SET
	AdcRegs.ADCTRL1.bit.ACQ_PS = ADC_SHCLK;  // Sequential mode: Sample rate   = 1/[(2+ACQ_PS)*ADC clock in ns]	 S/H时钟  = ADCCLK/ACQ_PS
	AdcRegs.ADCTRL1.bit.CONT_RUN = 0;       // Setup non-continuous run  启动/停止模式
	AdcRegs.ADCTRL1.bit.SEQ_OVRD = 0;       // Enable Sequencer override feature
	AdcRegs.ADCTRL3.bit.SMODE_SEL=1;          //设置同步采样模式
	AdcRegs.ADCTRL1.bit.SEQ_CASC = 0;         // 双排序器模式

	AdcRegs.ADCMAXCONV.all = 0x33;            // 最大采样通道为2，一次采样2个通道，总共可采4个通道
	AdcRegs.ADCCHSELSEQ1.bit.CONV00=0x0;	  // 采样ADCINAO和ADCINB0     ADCINAO对应ADCRESULTT0  ADCINB0对应ADCRESULTT1
	AdcRegs.ADCCHSELSEQ1.bit.CONV01=0x1;      // 采样ADCINA1和ADCINB1     ADCINA1对应ADCRESULTT2  ADCINB1对应ADCRESULTT3
	AdcRegs.ADCCHSELSEQ1.bit.CONV02=0x2;	  // 采样ADCINA2和ADCINB2     ADCINA2对应ADCRESULTT4  ADCINB2对应ADCRESULTT5
//	AdcRegs.ADCCHSELSEQ1.bit.CONV03=0x3;      // 采样ADCINA2和ADCINB3     ADCINA3对应ADCRESULTT6  ADCINB4对应ADCRESULTT7
//	AdcRegs.ADCREFSEL.bit.REF_SEL=0;

//  AdcRegs.ADCST.bit.INT_SEQ1_CLR = 1;
//	AdcRegs.ADCTRL2.bit.EPWM_SOCA_SEQ1 = 1;// Enable SOCA from ePWM to start SEQ1  SEQ1可以由ePWMx SOCA触发启动信号
//	AdcRegs.ADCTRL2.bit.RST_SEQ1 = 0;         // Reset SEQ1
//	AdcRegs.ADCTRL2.bit.SOC_SEQ1 = 1;
	AdcRegs.ADCTRL2.bit.EPWM_SOCA_SEQ1 = 1;//SEQ1不能由ePWMx SOCB 触发
//	AdcRegs.ADCTRL2.bit.EPWM_SOCB_SEQ2 = 0;//SEQ2不能由ePWMx SOCB 触发
	AdcRegs.ADCTRL2.bit.INT_ENA_SEQ1 = 1; //Enable Interrupt Sequence  ENA_SEQ1的中断请求
//	AdcRegs.ADCTRL2.bit.INT_MOD_SEQ1 = 0;
	//AdcRegs.ADCTRL2.bit.INT_ENA_SEQ2 = 0;TRL2.bit.INT_ENA_SEQ1 = 1;  // Enable SEQ1 interrupt (every EOS)

    EPwm4Regs.ETSEL.bit.SOCAEN = 1;        // Enable SOC on A group
	EPwm4Regs.ETSEL.bit.SOCASEL = ET_CTR_ZERO;       // Select SOC  from CTR=ZERO
	EPwm4Regs.ETPS.bit.SOCAPRD = ET_1ST;        // Generate pulse on 1st event

}


