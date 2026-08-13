#include "xc.h"
#include "keypad.h"

char readKeyPad() {
    char key = '\0';

    LATBbits.LATB12 = 0;
    LATBbits.LATB13 = 1;
    LATBbits.LATB14 = 1;
    LATBbits.LATB15 = 1;
    delay(1);
    if(PORTAbits.RA0 == 0) {
        key = 'A';
    }
    if(PORTAbits.RA1 == 0) {
        key = '3';
    }
    if(PORTAbits.RA2 == 0) {
        key = '2';
    }
    if(PORTAbits.RA3 == 0) {
        key = '1';
    }

    LATBbits.LATB12 = 1;
    LATBbits.LATB13 = 0;
    LATBbits.LATB14 = 1;
    LATBbits.LATB15 = 1;
    delay(1);
    if(PORTAbits.RA0 == 0) {
        key = 'b';
    }
    if(PORTAbits.RA1 == 0) {
        key = '6';
    }
    if(PORTAbits.RA2 == 0) {
        key = '5';
    }
    if(PORTAbits.RA3 == 0) {
        key = '4';
    }

    LATBbits.LATB12 = 1;
    LATBbits.LATB13 = 1;
    LATBbits.LATB14 = 0;
    LATBbits.LATB15 = 1;
    delay(1);
    if(PORTAbits.RA0 == 0) {
        key = 'C';
    }
    if(PORTAbits.RA1 == 0) {
        key = '9';
    }
    if(PORTAbits.RA2 == 0) {
        key = '8';
    }
    if(PORTAbits.RA3 == 0) {
        key = '7';
    }

    LATBbits.LATB12 = 1;
    LATBbits.LATB13 = 1;
    LATBbits.LATB14 = 1;
    LATBbits.LATB15 = 0;
    delay(1);
    if(PORTAbits.RA0 == 0) {
        key = 'd';
    }
    if(PORTAbits.RA1 == 0) {
        key = '#';
    }
    if(PORTAbits.RA2 == 0) {
        key = '0';
    }
    if(PORTAbits.RA3 == 0) {
        key = '*';
    }

    return key;
}

void initKeyPad(void) {
    TRISA |= 0x000F;
    TRISB &= 0x0FFF;
    CNPU1 |= 0xC;
    CNPU2 |= 0b0110000000000000;
}
