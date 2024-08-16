#include <stdio.h>


void sumar(int a,int b,int*resultado) { 
    *resultado = (a+b) ; 


}




int main(int argc, char const *argv[])
{
    int a = 25 ; 
    int b = 33 ; 
    int suma_t ; 
    printf("%d + %d es: \r\n", a,b) ; 
    sumar (a,b,&suma_t) ; 
    printf("%d + %d es: %d\r\n", a,b,suma_t) ; 
    return 0;
}
