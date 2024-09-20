#include <stdio.h>
typedef enum {
    SUMA,
    RESTA,
    MULTIPLICACION,
    DIVISION
}operador ; 

float operacion(float n1, float n2, operador op) { 
    float result ; 
    switch (op)
    {
        case SUMA:
            result = n1 + n2 ; 
            break;
        case RESTA:
            result = n1 - n2 ; 
            break;
        case MULTIPLICACION:
            result = n1* n2 ; 
            break;
        case DIVISION:
            result = n1/n2 ; 
            break;
        
        default:
            result = -1500.25; 
            break;
    }
    return result ; 
}



void main(void) { 
    operador op ; 
    float num1 = 32.33 ; 
    float num2 = 10.2 ; 
    op = SUMA ; 
    printf("la suma es :%f\r\n",operacion(num1,num2 ,op)) ; 
    op = RESTA ; 
    printf("la resta es :%f\r\n",operacion(num1,num2,op)); 
    op = MULTIPLICACION ; 
    printf("la multiplicacion es :%f\r\n",operacion(num1,num2,op));   
    op = DIVISION ; 
    printf("la division es :%f\r\n",operacion(num1,num2,op)); 
//// utilizando enteros !! 
    op = 1 ; 
    printf("la suma es :%f\r\n",operacion(num1,num2,op)) ; 
    op = 2 ; 
    printf("la resta es :%f\r\n",operacion(num1,num2,op)); 
    op = 3 ; 
    printf("la multiplicacion es :%f\r\n",operacion(num1,num2,op));   
    op = 4 ; 
    printf("la division es :%f\r\n",operacion(num1,num2,op)); 


}