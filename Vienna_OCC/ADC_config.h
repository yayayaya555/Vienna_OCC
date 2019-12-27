/*
 * ADC_config.h
 */

#ifndef ADC_CONFIG_H_
#define ADC_CONFIG_H_
#define ADC_MODCLK 0x3 // HSPCLK = SYSCLKOUT/2*ADC_MODCLK2 = 150/(2*3)   = 25.0M
void adc_config();

#endif /* ADC_CONFIG_H_ */
