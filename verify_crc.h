#ifndef _verify_crc_h_
#define _verify_crc_h_
#include <stdint.h>
#include <Arduino.h>

uint8_t      Get_CRC8_Check_Sum(uint8_t *message, uint32_t length, uint8_t CRC8);
uint32_t  Verify_CRC8_Check_Sum(uint8_t *message, uint32_t length);
void      Append_CRC8_Check_Sum(uint8_t *message, uint32_t length);

uint16_t    Get_CRC16_Check_Sum(uint8_t *message, uint32_t length, uint16_t CRC16);
uint32_t Verify_CRC16_Check_Sum(uint8_t *message, uint32_t length);
void     Append_CRC16_Check_Sum(uint8_t *message, uint32_t length);

#endif