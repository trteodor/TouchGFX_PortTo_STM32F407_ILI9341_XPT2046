/*
 * BMPXX0.h
 *
 *  The MIT License.
 *  Based on Adafuit libraries.
 *  Created on: 10.08.2018
 *      Author: Mateusz Salamon
 *      www.msalamon.pl
 *
 */

#ifndef BMPXX80_H_
#define BMPXX80_H_

#ifdef __cplusplus
 extern "C" {
#endif
//
//	Settings
//	Choose sensor
//
//	#define BMP180
#ifndef BMP180
	#define BMP280
#ifndef BMP280
	#define BME280
#endif
#define BMP_I2C 1
#define BMP_SPI 0
#endif
#ifdef BMP180
#define BMP_I2C 1
#endif

//
// I2C address
//
#ifdef BMP180
#define BMP180_I2CADDR	0xEE
#endif
#ifdef BMP280
#define BMP280_I2CADDR	0xEC  // >>1 76
//#define BMP280_I2CADDR	0xEE
#endif
#ifdef BME280
#define BME280_I2CADDR	0xEC
//#define BME280_I2CADDR	0xEE
#endif

//
//	Mode
//
#ifdef BMP180
#define BMP180_ULTRALOWPOWER	0
#define BMP180_STANDARD			1
#define BMP180_HIGHRES			2
#define BMP180_ULTRAHIGHRES		3
#endif
#ifdef BMP280
// Temperature resolution
#define BMP280_TEMPERATURE_16BIT 1
#define BMP280_TEMPERATURE_17BIT 2
#define BMP280_TEMPERATURE_18BIT 3
#define BMP280_TEMPERATURE_19BIT 4
#define BMP280_TEMPERATURE_20BIT 5

// Pressure oversampling
#define BMP280_ULTRALOWPOWER	1
#define BMP280_LOWPOWER			2
#define BMP280_STANDARD			3
#define BMP280_HIGHRES			4
#define BMP280_ULTRAHIGHRES		5

// t_standby time
#define BME280_STANDBY_MS_0_5	0
#define BME280_STANDBY_MS_10	6
#define BME280_STANDBY_MS_20	7
#define BME280_STANDBY_MS_62_5	1
#define BME280_STANDBY_MS_125	2
#define BME280_STANDBY_MS_250 	3
#define BME280_STANDBY_MS_500	4
#define BME280_STANDBY_MS_1000	5

// IIR filter
#define BME280_FILTER_OFF	0
#define BME280_FILTER_X2 	1
#define BME280_FILTER_X4 	2
#define BME280_FILTER_X8	3
#define BME280_FILTER_X16 	4

// Mode
#define BMP280_SLEEPMODE		0
#define BMP280_FORCEDMODE		1
#define BMP280_NORMALMODE		3
#endif
#ifdef BME280
// Huminidity oversampling
#define BME280_HUMINIDITY_DISABLE			0
#define BME280_HUMINIDITY_ULTRALOWPOWER		1
#define BME280_HUMINIDITY_LOWPOWER			2
#define BME280_HUMINIDITY_STANDARD			3
#define BME280_HUMINIDITY_HIGHRES			4
#define BME280_HUMINIDITY_ULTRAHIGH			5

// Temperature resolution
#define BME280_TEMPERATURE_DISABLE	0
#define BME280_TEMPERATURE_16BIT 	1
#define BME280_TEMPERATURE_17BIT 	2
#define BME280_TEMPERATURE_18BIT 	3
#define BME280_TEMPERATURE_19BIT 	4
#define BME280_TEMPERATURE_20BIT 	5

// Pressure oversampling
#define BME280_PRESSURE_DISABLE			0
#define BME280_PRESSURE_ULTRALOWPOWER	1
#define BME280_PRESSURE_LOWPOWER		2
#define BME280_PRESSURE_STANDARD		3
#define BME280_PRESSURE_HIGHRES			4
#define BME280_PRESSURE_ULTRAHIGHRES	5

// t_standby time
#define BME280_STANDBY_MS_0_5	0
#define BME280_STANDBY_MS_10	6
#define BME280_STANDBY_MS_20	7
#define BME280_STANDBY_MS_62_5	1
#define BME280_STANDBY_MS_125	2
#define BME280_STANDBY_MS_250 	3
#define BME280_STANDBY_MS_500	4
#define BME280_STANDBY_MS_1000	5

// IIR filter
#define BME280_FILTER_OFF	0
#define BME280_FILTER_X2 	1
#define BME280_FILTER_X4 	2
#define BME280_FILTER_X8	3
#define BME280_FILTER_X16 	4

// Mode
#define BME280_SLEEPMODE		0
#define BME280_FORCEDMODE		1
#define BME280_NORMALMODE		3
#endif
//
//	Coeffs registers
//
#ifdef BMP180
#define BMP180_CAL_AC1		0xAA  // R   Calibration data (16 bits)
#define BMP180_CAL_AC2		0xAC  // R   Calibration data (16 bits)
#define BMP180_CAL_AC3		0xAE  // R   Calibration data (16 bits)
#define BMP180_CAL_AC4		0xB0  // R   Calibration data (16 bits)
#define BMP180_CAL_AC5		0xB2  // R   Calibration data (16 bits)
#define BMP180_CAL_AC6		0xB4  // R   Calibration data (16 bits)
#define BMP180_CAL_B1		0xB6  // R   Calibration data (16 bits)
#define BMP180_CAL_B2		0xB8  // R   Calibration data (16 bits)
#define BMP180_CAL_MB		0xBA  // R   Calibration data (16 bits)
#define BMP180_CAL_MC		0xBC  // R   Calibration data (16 bits)
#define BMP180_CAL_MD		0xBE  // R   Calibration data (16 bits)
#endif
#ifdef BMP280
#define	BMP280_DIG_T1		0x88
#define	BMP280_DIG_T2		0x8A
#define	BMP280_DIG_T3		0x8C

#define	BMP280_DIG_P1		0x8E
#define	BMP280_DIG_P2		0x90
#define	BMP280_DIG_P3		0x92
#define	BMP280_DIG_P4		0x94
#define	BMP280_DIG_P5		0x96
#define	BMP280_DIG_P6		0x98
#define	BMP280_DIG_P7		0x9A
#define	BMP280_DIG_P8		0x9C
#define	BMP280_DIG_P9		0x9E
#endif
#ifdef BME280
#define	BME280_DIG_T1		0x88
#define	BME280_DIG_T2		0x8A
#define	BME280_DIG_T3		0x8C

#define	BME280_DIG_P1		0x8E
#define	BME280_DIG_P2		0x90
#define	BME280_DIG_P3		0x92
#define	BME280_DIG_P4		0x94
#define	BME280_DIG_P5		0x96
#define	BME280_DIG_P6		0x98
#define	BME280_DIG_P7		0x9A
#define	BME280_DIG_P8		0x9C
#define	BME280_DIG_P9		0x9E

#define	BME280_DIG_H1		0xA1
#define	BME280_DIG_H2		0xE1
#define	BME280_DIG_H3		0xE3
#define	BME280_DIG_H4		0xE4
#define	BME280_DIG_H5		0xE5
#define	BME280_DIG_H6		0xE7
#endif

//
//	Registers
//
#ifdef BMP180
#define	BMP180_CHIPID			0xD0
#define BMP180_VERSION			0xD1
#define BMP180_SOFTRESET		0xE0
#define BMP180_CONTROL			0xF4
#define BMP180_TEMPDATA			0xF6
#define BMP180_PRESSUREDATA		0xF6
#define BMP180_READTEMPCMD		0x2E
#define BMP180_READPRESSURECMD	0x34
#endif
#ifdef BMP280
#define	BMP280_CHIPID			0xD0
#define	BMP280_VERSION			0xD1
#define	BMP280_SOFTRESET		0xE0
#define	BMP280_CAL26			0xE1  // R calibration stored in 0xE1-0xF0
#define	BMP280_STATUS			0xF3
#define	BMP280_CONTROL			0xF4
#define	BMP280_CONFIG			0xF5
#define	BMP280_PRESSUREDATA		0xF7
#define	BMP280_TEMPDATA			0xFA
#endif
#ifdef BME280
#define	BME280_CHIPID			0xD0
#define	BME280_VERSION			0xD1
#define	BME280_SOFTRESET		0xE0
#define	BME280_CAL26			0xE1  // R calibration stored in 0xE1-0xF0
#define	BME280_HUM_CONTROL		0xF2
#define	BME280_STATUS			0xF3
#define	BME280_CONTROL			0xF4
#define	BME280_CONFIG			0xF5
#define	BME280_PRESSUREDATA		0xF7
#define	BME280_TEMPDATA			0xFA
#define	BME280_HUMIDDATA		0xFD
#endif

//
//	Control bits
//
#ifdef BMP180
#define	BMP180_SCO			(1<<5) // Start conversion bit (written 0 if conversion done)
#endif
#ifdef BMP280
#define	BMP280_MEASURING			(1<<3) // Conversion in progress
#endif
#ifdef BME280
#define	BME280_MEASURING			(1<<3) // Conversion in progress
#endif

//
// User functions
//
#ifdef BMP180
void BMP180_Init(I2C_HandleTypeDef *i2c_handler, uint8_t mode);

float BMP180_ReadTemperature(void);
int32_t BMP180_ReadPressure(void);

float BMP180_PressureToAltitude(float sea_level, float atmospheric);
float BMP180_SeaLevelForAltitude(float altitude, float atmospheric);
#endif
#ifdef BMP280
#if(BMP_I2C == 1)
void BMP280_Init(I2C_HandleTypeDef *i2c_handler, uint8_t temperature_resolution, uint8_t pressure_oversampling, uint8_t mode);
#endif
#if(BMP_SPI == 1)
void BMP280_Init(SPI_HandleTypeDef *spi_handler, uint8_t temperature_resolution, uint8_t pressure_oversampling, uint8_t mode);
#endif
void BMP280_SetConfig(uint8_t standby_time, uint8_t filter);

float BMP280_ReadTemperature(void);
int32_t BMP280_ReadPressure(void);
uint8_t BMP280_ReadTemperatureAndPressure(float *temperature, int32_t *pressure);

float BMP280_ReadAltitude(float sea_level_pa);
#endif
#ifdef BME280
#if(BMP_I2C == 1)
void BME280_Init(I2C_HandleTypeDef *i2c_handler, uint8_t temperature_resolution, uint8_t pressure_oversampling, uint8_t huminidity_oversampling, uint8_t mode);
#endif
#if(BMP_SPI == 1)
void BME280_Init(SPI_HandleTypeDef *spi_handler, uint8_t temperature_resolution, uint8_t pressure_oversampling, uint8_t huminidity_oversampling, uint8_t mode);
#endif
void BME280_SetConfig(uint8_t standby_time, uint8_t filter);

float BME280_ReadTemperature(void);
int32_t BME280_ReadPressure(void);
float BME280_ReadHuminidity(void);
uint8_t BME280_ReadTemperatureAndPressureAndHuminidity(float *temperature, int32_t *pressure, float *huminidity);

float BME280_ReadAltitude(float sea_level_pa);
#endif


#ifdef __cplusplus
}
#endif

#endif /* BMPXX80_H_ */
