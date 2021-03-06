/***************************************************
 * File:touch_interfaces.h
 * VENDOR_EDIT
 * Copyright (c)  2008- 2030  Oppo Mobile communication Corp.ltd.
 * Description:
 *             Touch interface
 * Version:1.0:
 * Date created:2016/09/02
 * Author: Tong.han@Bsp.Driver
 * TAG: BSP.TP.Init
 * *
 * -------------- Revision History: -----------------
 *  <author >  <data>  <version>  <desc>
 ***************************************************/

#ifndef TOUCH_INTERFACES_H
#define TOUCH_INTERFACES_H

#define MAX_I2C_RETRY_TIME 2

int touch_i2c_read_byte(struct i2c_client* client, u16 addr);
int touch_i2c_write_byte(struct i2c_client* client, u16 addr, unsigned char data);

int touch_i2c_read_word(struct i2c_client* client, u16 addr);
int touch_i2c_write_word(struct i2c_client* client, u16 addr, unsigned short data);

int touch_i2c_read_block(struct i2c_client* client, u16 addr, unsigned short length, unsigned char *data);
int touch_i2c_write_block(struct i2c_client* client, u16 addr, unsigned short length, unsigned char const *data);

int init_touch_interfaces(struct device *dev, bool flag_register_16bit);

#endif

