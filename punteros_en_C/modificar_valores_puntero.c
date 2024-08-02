#include <stdio.h>


void main(void)
{
    char  a1  ='a' ; 
    char  a2  ='b' ;
    float f1 = 33.25f; 
    float f2 = 223.45f; 
    float *ptrf ; 
    char  *ptrc ; 
    printf("a1: %c\r\n",a1) ; 
    printf("a1: %c\r\n",a2) ; 
    printf("f1: %f\r\n",f1) ; 
    printf("f2: %f\r\n",f2) ; 
    
    ptrc = &a1 ; 
    *ptrc = 'c' ; 
    ptrc = &a2 ; 
    *ptrc = 'd' ; 
    ptrf = &f1 ; 
    *ptrf = 88.3 ; 
    ptrf = &f2 ;     
    *ptrf = 25.2 ; 
    printf("a1: %c\r\n",a1) ; 
    printf("a1: %c\r\n",a2) ; 
    printf("f1: %f\r\n",f1) ; 
    printf("f2: %f\r\n",f2) ; 

}
