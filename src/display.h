#ifndef DISPLAY_H
#define DISPLAY_H

#include <xc.h>

#ifdef __cplusplus
extern "C" {
#endif

    const static unsigned int Characters[] = {
        0b1111111111110011,
        0b1111110110000011,
        0b1111111101101011,
        0b1111111111001011,
        0b1111110110011011,
        0b1111111011011011,
        0b1111111011111011,
        0b1111111110000011,
        0b1111111111111011,
        0b1111111111011011,
        0b1111111110111011,
        0b1111110011111011,
        0b1111111001110011,
        0b1111110111101011,
        0b1111110000000111,
        0b1111110110111011,
    };

    enum Digit {
        LEFT = 0b0000100000000000,
        RIGHT = 0b0000010000000000
    };

    void showChar7seg(char toShow, enum Digit digit);
    void init7seg(void);
    void test(void);

#ifdef __cplusplus
}
#endif

#endif
