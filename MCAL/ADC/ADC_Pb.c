/*
 * ADC_Pb.c
 *
 * Created: 1/9/2020 11:15:16 PM
 *  Author: ahmed
 */ 

 #include "ADC_Pb.h"

Str_ADCConfiguration_t ADC_obj = {ADC_CHANNEL0,EXTERNAL_CAPACITOR_AT_VREF,ADC_INTRRUPT_MODE,RIGHT_ADJUST,AUTO_TRIGGER_MODE,TIMER1_OVER_FLOW,PRESCALLER_64};