#pragma config ICS = PGx1
#pragma config FWDTEN = OFF
#pragma config GWRP = OFF
#pragma config GCP = OFF
#pragma config JTAGEN = OFF
#pragma config I2C1SEL = PRI
#pragma config IOL1WAY = OFF
#pragma config OSCIOFNC = ON
#pragma config FCKSM = CSECME
#pragma config FNOSC = FRCPLL

#include "xc.h"
#include "display.h"

char leftKey = '\0';
char rightKey = '\0';

void checkKey();
void refreshDisplay();

void setup() {
    CLKDIVbits.RCDIV = 0;
    AD1PCFG = 0x9fff;
    init7seg();
    initKeyPad();
}

int main(void) {
    setup();
    while(1){
        checkKey();
        refreshDisplay();
    }
    return 0;
}

void checkKey(){
    char key = readKeyPad();
    if(key != '\0'){
        leftKey = rightKey;
        rightKey = key;
        while(key != '\0') { key = readKeyPad(); }
    }
}

void refreshDisplay(){
    if(leftKey != '\0'){
        showChar7seg(leftKey, LEFT);
        delay(10);
    }
    if(rightKey != '\0'){
        showChar7seg(rightKey, RIGHT);
        delay(10);
    }
}
