#include "mbed.h"
#include "rtos.h"

PwmOut pwm0(PD_0);
PwmOut pwm1(PD_1);
PwmOut pwm2(PD_2);
PwmOut pwm3(PD_3);
//PwmOut pwm4(PB_3);

int main() {
    pwm0.period_ms(4.0f);
    pwm0.write(0.25f);
    pwm1.period_ms(4.0f);
    pwm1.write(0.50f);
    pwm2.period_ms(4.0f);
    pwm2.write(0.75f);
    pwm3.period_ms(8.0f);
    pwm3.write(0.25f);
//    pwm4.period_ms(8.0f);
//    pwm4.write(0.50f);

    while(true) {
        printf("duty=%f\r\n", pwm0.read());
        Thread::wait(500);
    }
}
