#include <avr/io.h>
#include <util/delay.h>

#define LED_PIN PD0

int main(void) {
    DDRD |= (1 << LED_PIN);

    while (1) {
        PORTD |= (1 << LED_PIN);
        _delay_ms(1000);

        PORTD &= ~(1 << LED_PIN);
        _delay_ms(1000);
    }
    
    return 0;
}
