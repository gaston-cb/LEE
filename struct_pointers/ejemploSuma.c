#include <stdio.h>
int suma (int a, int b)
{
  return a+b;
}

int resta (int a, int b)
{
  return a-b;
}

typedef int (*funcion_alias)(int, int) ; 



void main (void)
{
  int (*funcion) (int,int);  // variable puntero a función 
  funcion_alias f1; 
  int x, y ; 
  funcion = suma;	   // ‘funcion’ apunta a ‘suma’
  f1 = suma ; 
  y = f1(3,5) ;   
  x = funcion(4,3);  // x=suma(4,3)
  printf("x: %d - y  %d\r\n",x,y) ; 
  funcion = resta;   // ‘funcion’ apunta a ‘resta’
  f1 = resta  ; 
  x = funcion(4,3);  // x=resta(4,3)
  y = f1(3,5) ;   
  printf("x: %d - y  %d\r\n",x,y) ; 
}