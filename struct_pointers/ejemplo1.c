#include <stdio.h>
#include <stdint.h>
#define LED_ONE  7
#define LED_TWO  8
#define LED_TREE 9 
#include <stdio.h>
#include <stdint.h>

#define LED_ONE  7
#define LED_TWO  8
#define LED_TREE 9 

typedef void (*callback_fn)(uint16_t a); 

typedef struct { 
    uint8_t port; 
    uint8_t state; 
    callback_fn fn; 
} led_t; 

// Declaraciones de funciones
void initport(led_t *led, uint8_t port, uint8_t state_initial, callback_fn fn); 
void changeStateLed(led_t *led, uint16_t a); 
void action_led(uint16_t a); 



void main(void) 
{
    led_t led1, led2, led3; 
    initport(&led1, LED_ONE, 0, action_led);     
    initport(&led2, LED_TWO, 1, action_led);     
    initport(&led3, LED_TREE, 2, action_led);     
    changeStateLed(&led1, 100); 
    changeStateLed(&led2, 200); 
    changeStateLed(&led3, 230); 
    changeStateLed(&led1, 440); 

}




void initport(led_t *led, uint8_t port, uint8_t state_initial, callback_fn fn){ 
    // Usar Arduino pinMode y digitalWrite() si es necesario
    led->port = port; 
    led->state = state_initial; 
    led->fn = fn; 
    printf("port number: %d, state port: %d\n", led->port, led->state); 
}

void changeStateLed(led_t *led, uint16_t a){
    // Cambiar el estado del LED
    led->state = (led->state != 0) ? 0 : 1; // Cambia el estado: si es 1, pasa a 0 y viceversa
    printf("Changing LED state to: %d\n", led->state); 

    // Si la función callback está definida, se ejecuta con el argumento 'a'
    if (led->fn != NULL){ 
        led->fn(a); 
    }
}

void action_led(uint16_t a){ 
    printf("Se ejecuto el callback:  %d\n", a); 
}