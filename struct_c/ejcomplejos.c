#include <stdio.h> 

/// 
struct complejo
{
    float real ; 
    float imag ; 

};




struct complejo sumarComplejo(struct complejo complejo1,struct complejo complejo2){
    struct complejo suma ; 
    suma.real = complejo1.real + complejo2.real ; 
    suma.imag = complejo1.imag + complejo2.imag ; 
    
    return suma ; 
}



void main(void){ 
    struct complejo z1,z2,suma  ; 
    z1.real = 10.2 ; 
    z2.real = 10.2 ; 
    z1.imag = 2.2 ; 
    z2.imag = 4.9 ; 
    suma = sumarComplejo(z1,z2) ; 
    printf("la suma es: %f + %fj", suma.real, suma.imag) ; 



}


