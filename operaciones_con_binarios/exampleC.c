#include <stdio.h>
#include <stdint.h>

void mostrar_resultados(int8_t a, int8_t b) {
    int8_t suma = a + b;
    int8_t resta = a - b;

    printf("Suma: %02X + %02X = %02X (%d)\n",(uint8_t)a,(uint8_t)b, (uint8_t)suma, suma);
    printf("Resta: %02X - %02X = %02X (%d)\n", (uint8_t)a, (uint8_t)b, (uint8_t)resta, resta);
    printf("----------------------------------------\n");
}

int main() {
    // Valores de 8 bits con signo (-128 a 127)
    int8_t a = 0x7F;  // 127
    int8_t b = 0x02;  // 2
    mostrar_resultados(a, b);

    // Caso de desbordamiento positivo
    a = 0x7F;  // 127
    b = 0x06;  // 1
    mostrar_resultados(a, b);  // // Indicar que se espera y que se va a mostrar en pantalla

    // Caso de desbordamiento negativo
    a = 0x80;  // -128
    b = -0x02; // -1
    mostrar_resultados(a, b);  // Indicar que se espera y que se va a mostar en pantalla 

    return 0;
}
