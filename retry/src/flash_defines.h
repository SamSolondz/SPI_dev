/*
 * flash_defines.h
 *
 *  Created on: Mar 5, 2019
 *      Author: Sam
 */

#ifndef INC_FLASH_DEFINES_H_
#define INC_FLASH_DEFINES_H_

#define DUMMY_BYTE		0x00

#define FLASH_RESET		0xff

#define READ_JEDEC 		0x9f
#define JEDEC_MFR_ID	0xef
#define JEDEC_ID_VAL1  	0xaa
#define JEDEC_ID_VAL0 	0x21

#define FLASH_READ_STATUS	0x0f
#define	FLASH_WRITE_STATUS	0x1f
#define FLASH_SR1			0xA0 //"Axh" is x don't care?
#define FLASH_SR2			0xB0
#define FLASH_SR3			0xC0

#define FLASH_WRITE_ENABLE	0x06
#define FLASH_WRITE_DISABLE	0x04

#define FLASH_BAD_BLOCK_MAN	0xa1
#define FLASH_READ_BBM_LUT	0xa5

#define	FLASH_BLOCK_ERASE	0xd8

#define FLASH_LOAD_PROGRAM_DATA	0x02
#define FLASH_RANDOM_LOAD_PROGRAM_DATA 0x84
#define FLASH_PROGRAM_EXECUTE	0x10

#define FLASH_PAGE_DATA_READ	0x13
#define FLASH_READ_DATA			0x03

#define FLASH_FINAL_COLUMN_ADDR	0x7F8

#define FLASH_BUSY_BIT			0x01

#define FLASH_DATA_PAGE_START	0x01

//Page where params are kept
#define FLASH_PARAM_PAGE		0x00
//Columns in param page
#define FLASH_LAST_COLUMN		0x00
#define	FLASH_LAST_PAGE			0x04
#define FLASH_LAST_MODE			0x0C
#define FLASH_START_TIME		0x10

#define TEST1					0x14
#define TEST2					0x18
#define TEST3					0x1C

#endif /* INC_FLASH_DEFINES_H_ */
