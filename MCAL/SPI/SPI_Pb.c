/*
 * SPI_Pb.c
 *
 * Created: 12/20/2019 3:33:27 PM
 *  Author: Ahmed Alaa
 */ 
 #include "SPI_Pb.h"

 Str_SPIConfiguration_t SPI_TX = {MASTER,NORMAL_SPEED,PRE_SCALER_F_4,POLLING,SAMPLE_LEAD,MSB,POLARITY_LOW};
 Str_SPIConfiguration_t SPI_RX = {SLAVE ,NORMAL_SPEED,PRE_SCALER_F_4,POLLING,SAMPLE_LEAD,MSB,POLARITY_LOW}; 

