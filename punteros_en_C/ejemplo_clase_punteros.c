#include <stdio.h>


void main(void)
{
    int *p ; 
    int *ptr ; 
    int a  = 100; 
    printf("dir a es: %u\r\n",&a) ; // imprimo posición de memoria de a 
    printf("a es: %d\r\n",a)   ;  // imprimo  a 
    /// cuanto imprime la siguiente operación ?? 
    p = &a ; 
    getchar() ; 
    ptr = &p ; 
    printf("p es: %u\r\n",p) ;  // QUE IMPRIME EN CADA CASO ? 
    printf("&p es : %u\r\n",&p) ; // QUE IMPRIME EN CADA CASO ? 
    printf("doble ptr es: %u\r\n",*ptr) ; // QUE IMPRIME EN CADA CASO ? 
}
