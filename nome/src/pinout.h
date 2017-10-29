#ifndef PINOUT_H_
#define PINOUT_H_

#include "gpio_pin.h"
#include "i2c_bus.h"

struct Pinout {
    GPIOBus gpioa;
    GPIOBus gpiob;
    GPIOBus gpioc;
    GPIOBus gpiod;

    // StatusLed
    GPIOPin led_ok;
    GPIOPin led_error;
    GPIOPin led_activity;

    // Pec11 rotary encoder
    GPIOPin encoder_clockwise;
    GPIOPin encoder_counter_clockwise;
    GPIOPin encoder_button;

    // I2C, Display & DAC
    GPIOPin i2c_scl;
    GPIOPin i2c_sda;
    I2CBus i2c_bus;

    // DAC
    GPIOPin dac_reset;
    
    GPIOPin dac_i2s_mck;
    GPIOPin dac_i2s_ck;
    GPIOPin dac_i2s_sd;
    GPIOPin dac_i2s_ws;

    Pinout();
    void Init();
};

#endif
