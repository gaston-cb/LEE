#include <stdio.h>
typedef struct complejo
{
    float real ; 
    float img ; 

}complejo;



complejo sumarComplejo(complejo complejo1, complejo complejo2){
    complejo suma ; 
    suma.real = complejo1.real + complejo2.real ; 
    suma.img = complejo1.img + complejo2.img ; 
    
    return suma ; 
}


void main(void){ 
    complejo z1,z2,suma  ; 
    z1.real = 10.2 ; 
    z2.real = 10.2 ; 
    z1.img = 2.2 ; 
    z2.img = 4.9 ; 
    suma = sumarComplejo(z1,z2) ; 
    printf("la suma es: %f + %fj", suma.real, suma.img) ; 

}
