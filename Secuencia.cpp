// Secuecuencia de luces usando Registros en STM32F446RE - STM32F411RE en Mbed

#include "mbed.h"
int main() {
    GPIOA->MODER=0x55555555;
    GPIOA->OTYPER=0x0000;
    GPIOA->OSPEEDR=0x55555555;
    GPIOA->PUPDR=0x00000000; 
    while(1) {
        GPIOA->ODR= 0xE000; 
        wait_ms(1000); 
        GPIOA->ODR = 0x7000; 
        wait_ms(1000); 
        GPIOA->ODR=0x3800;
        wait_ms(2);
        GPIOA->ODR=0x1C00;
        wait_ms(1000);
        GPIOA->ODR=0x0E00;
        wait_ms(1000);
        GPIOA->ODR=0x0700;
        wait_ms(1000);
        GPIOA->ODR=0x0380;
        wait_ms(1000);
        GPIOA->ODR=0x01C0;
        wait_ms(1000);
        GPIOA->ODR=0x00E0;
        wait_ms(1000);
        GPIOA->ODR=0x0070;
        wait_ms(1000);
        GPIOA->ODR=0x0038;
        wait_ms(1000);
        GPIOA->ODR=0x001C;
        wait_ms(1000);
        GPIOA->ODR=0x000E;
        wait_ms(1000);
        GPIOA->ODR=0x0007;
        wait_ms(1000);
        GPIOA->ODR= 0xE000; 
        wait_ms(1000); 
        GPIOA->ODR=0x001C;
        wait_ms(1000);
        GPIOA->ODR=0x0038;
        wait_ms(1000);
        GPIOA->ODR=0x0070;
        wait_ms(1000);
        GPIOA->ODR=0x00E0;
        wait_ms(1000);
        GPIOA->ODR=0x01C0;
        wait_ms(1000);
        GPIOA->ODR=0x380;
        wait_ms(1000);
        GPIOA->ODR=0x0700;
        wait_ms(1000);
        GPIOA->ODR=0xE00;
        wait_ms(1000);
        GPIOA->ODR=0x1C00;
        wait_ms(1000);
        GPIOA->ODR=0x3800;
        wait_ms(1000);
        GPIOA->ODR=0x7000;
        wait_ms(1000);
        GPIOA->ODR=0xE000;
        wait_ms(1000);
    }
}
