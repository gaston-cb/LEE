#include <stdio.h>


void intercambiar(int *a ,int *b){
    int aux ; 
    aux = *a ; 
    *a = *b ; 
    *b = aux ; 

}


int main()
{
    int a = 22 ;  
    int b = 35 ;  
    printf("%d, %d\r\n",a,b);
    intercambiar(&a,&b) ; 
    getchar() ; 
    printf("%d, %d\r\n",a,b);
    return 0;
}
