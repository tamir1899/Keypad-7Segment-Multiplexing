#include "xc.h"
#include "display.h"

void init7seg(void) {
    TRISB &= 0xF003;
    LATB = 0xF3FF;
}

void test(void) {
    showChar7seg('0', RIGHT);
    delay(250);
    showChar7seg('1', LEFT);
    delay(250);
    showChar7seg('2', RIGHT);
    delay(250);
    showChar7seg('3', LEFT);
    delay(250);
    showChar7seg('4', RIGHT);
    delay(250);
    showChar7seg('5', LEFT);
    delay(250);
    showChar7seg('6', RIGHT);
    delay(250);
    showChar7seg('7', LEFT);
    delay(250);
    showChar7seg('8', RIGHT);
    delay(250);
    showChar7seg('9', LEFT);
    delay(250);
    showChar7seg('A', RIGHT);
    delay(250);
    showChar7seg('b', LEFT);
    delay(250);
    showChar7seg('C', RIGHT);
    delay(250);
    showChar7seg('d', LEFT);
    delay(250);
    showChar7seg('*', RIGHT);
    delay(250);
    showChar7seg('#', LEFT);
    delay(250);
    return;
}

void showChar7seg(char toShow, enum Digit digit) {
    LATB &= 0xF3FF;

    uint16_t chartoShow;

    if(toShow == '0'){
        chartoShow = ~(Characters[0]);
    }
    else if(toShow == '1'){
        chartoShow = ~(Characters[1]);
    }
    else if (toShow == '2') {
        chartoShow = ~(Characters[2]);
    }
    else if (toShow == '3') {
        chartoShow = ~(Characters[3]);
    }
    else if (toShow == '4') {
        chartoShow = ~(Characters[4]);
    }
    else if (toShow == '5') {
        chartoShow = ~(Characters[5]);
    }
    else if (toShow == '6') {
        chartoShow = ~(Characters[6]);
    }
    else if (toShow == '7') {
        chartoShow = ~(Characters[7]);
    }
    else if (toShow == '8') {
        chartoShow = ~(Characters[8]);
    }
    else if (toShow == '9') {
        chartoShow = ~(Characters[9]);
    }
    else if (toShow == 'A') {
        chartoShow = ~(Characters[10]);
    }
    else if (toShow == 'b') {
        chartoShow = ~(Characters[11]);
    }
    else if (toShow == 'C') {
        chartoShow = ~(Characters[12]);
    }
    else if (toShow == 'd') {
        chartoShow = ~(Characters[13]);
    }
    else if (toShow == '*') {
        chartoShow = ~(Characters[14]);
    }
    else if (toShow == '#') {
        chartoShow = ~(Characters[15]);
    }

    chartoShow |= digit;

    LATB = chartoShow;

    return;
}
