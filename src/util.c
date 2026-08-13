#include "xc.h"
#include "util.h"

void delay(unsigned int ms) {
    int i;
    for (i = 0; i < ms; i++) {
        asm ("nop");
        asm ("repeat #15930");
        asm ("nop");
    }
    return;
}
