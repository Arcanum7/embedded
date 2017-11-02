#ifndef AS1115_DISPLAY_H_
#define AS1115_DISPLAY_H_

#include "display_7seg.h"

class AS1115Display : public Display7Seg {
public:
    AS1115Display(I2CBus& i2c_bus,
                  uint8_t device_address);
    AS1115Display(I2CBus& i2c_bus);
    ~AS1115Display() = default;

    virtual void Init();
    virtual void SetBrightness(uint8_t brightness);

private:
    void set_scan_limit(uint8_t limit);
    void set_features();
};

#endif