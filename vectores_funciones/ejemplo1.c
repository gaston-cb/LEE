/**
 * @file ejemplo1.c
 * @author gaston valdez (you@domain.com)
 * @brief Ejemplo de funciones en C. Calculadora simple  
 * @version 1.0
 * @date 2025-04-12
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>
#include <stdlib.h>



/// FORMATO DE CREACIÓN DE FUNCIONES "VALOR DE RETORNO" - NONOMBRE DE LA FUNCION - PARAMETROS
/// Por ejemplo: la funcion suma se ve de la siguiente manera:
/// float suma(float a, float b) : float retorna un valor de tipo float, el nombre es suma, y recibe dos parametros de tipo float
//// igual para las otras 
float suma(float a, float b) ; 
float resta(float a, float b) ; 
float multiplicacion(float a, float b) ;
float division(float a, float b) ;


void main(){ 
    float primerNumero, segundoNumero, resultado;
    float operandos[2] ; 

    int opcion;


    printf("Ingrese el primer numero: ");
    scanf("%f", &operandos[0]);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &operandos[1]);
    primerNumero = operandos[0]; 
    segundoNumero = operandos[1]; 
    printf("Seleccione la operacion a realizar:\n");    
    printf("1. Sumar\n");       
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("Ingrese su opcion: ");
    scanf("%d", &opcion);
    switch(opcion){
        case 1:
            resultado = suma(primerNumero, segundoNumero);
            printf("El resultado de la suma es: %.2f\n", resultado);
            break;
        case 2:
            resultado = resta(primerNumero, segundoNumero);
            printf("El resultado de la resta es: %.2f\n", resultado);
            break;
        case 3:
            resultado = multiplicacion(primerNumero, segundoNumero);
            printf("El resultado de la multiplicacion es: %.2f\n", resultado);
            break;
        case 4:
            if(segundoNumero != 0){
                resultado = division(primerNumero, segundoNumero);
                printf("El resultado de la division es: %.2f\n", resultado);
            }else{
                printf("Error: Division por cero no permitida.\n");
            }
            break;
        default:
            printf("Opcion no valida.\n");
    }
}



float suma(float a, float b){
    return a + b;
}


float resta(float a, float b){
    return a - b;
}
float multiplicacion(float a, float b){
    return a * b;
}

float division(float a, float b){
    return a / b;
}
// En este ejemplo, se define una función para cada operación matemática básica (suma, resta, multiplicación y división).
// Cada función toma dos parámetros de tipo float y devuelve el resultado de la operación correspondiente.
// La función main solicita al usuario que ingrese dos números y seleccione una operación. Luego, llama a la función correspondiente y muestra el resultado.
// El programa maneja la división por cero verificando si el segundo número es cero antes de realizar la operación de división.
// El programa utiliza la función scanf para leer la entrada del usuario y printf para mostrar los resultados.
// El programa es un ejemplo básico de cómo se pueden utilizar funciones en C para realizar operaciones matemáticas simples.
// El programa utiliza la función scanf para leer la entrada del usuario y printf para mostrar los resultados.
// El programa es un ejemplo básico de cómo se pueden utilizar funciones en C para realizar operaciones matemáticas simples.