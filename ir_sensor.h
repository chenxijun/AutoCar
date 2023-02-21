#ifndef _IR_SENSOR_H_
#define _IR_SENSOR_H_

#include "const.h"

typedef struct
{
    uint8_t pin[IR_SENSOR_TOTAL];
} IR_sensor;

void IR_setup(IR_sensor *ir);
int8_t IR_read(IR_sensor *ir);

#endif
