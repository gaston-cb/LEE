/**
 * @file promedio.c
 * @author your name (you@domain.com)
 * @brief Ejemplo de vectores en C. Calculo del promedio de un vector
 * @version 1.0
 * @date 2025-04-12
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>


#define SIZE_DATA 100 /// tarea para el hogar: investigar como funciona esta "macro" y como puede usarla en el programa

float promedio(int N,int *datos) ; 
//float promedio(int N,int datos[]) ; -- alternativa -- descomentar esta linea  y comentar la de arriba. También lo mismo con las linas 
/// de abajo de la función main 

float test(int v[10]){ 
    for (int i=0; i<10; i++){
        printf("%d ", v[i]);
    }   
    printf("\n"); 
}


 void main(){ 
    int datos[SIZE_DATA]; 
    float resultado;
    //// Generamos numeros aleatorios entre 0 y 10 enteros 
    srand(time(NULL)); /// inicio de semilla para generar numeros aleatorios -- hora de la compu 
    for (int i=0; i<100; i++){
        datos[i] = rand()%101; /// genera un numero aleatorio entre 0 y 100: EL OPERADOR "%" ES EL RESTO 
    }
    resultado = promedio(SIZE_DATA, datos);
    printf("El promedio es: %.2f\n", resultado);
 } 


 float promedio(int N,int *datos) { 
    float acumulador = 0;
    for(int i=0; i<N; i++){
        acumulador = acumulador + datos[i];
    }
    return acumulador/N;
 }



 //float promedio(int N,int datos[]) { 
 //   float acumulador = 0;
 //   for(int i=0; i<N; i++){
 //       acumulador = acumulador + datos[i];
 //   }
 //   return acumulador/N;
 //}