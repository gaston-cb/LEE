# Ejercicios de punteros 

- Ejercicio 1
    Declara un puntero a un entero y asigna la dirección de una variable entera a dicho puntero. Imprime el valor de la variable entera utilizando el puntero.

- Ejercicio 2 
    
    Cambie el valor de una variable entera, otra variable flotante y otra de tipo char utilizando punteros. 

- Ejercicio 3 

    Tiene un vector como sigue: 

    int a1 [5] = {1,2,3,4,5}  ;

    Crear un puntero al primer elemento de a1 y modificar su valor. POr ejemplo cambie el a1[0] por 20 o por un valor ingresado por teclado. 


- Ejercicio 4

    Se tienen dos enteros a y b, por ejemplo a=20, b = 50, crear un programa utilizando punteros que intercambie los valores, es decir si a=20, b= 50 al inicio del programa, al final deben quedar como a=50 y b=20

- Ejercicio 5 
    Pruebe el siguiente código y diga que hace (intente predecir sus valores antes de probarlo): 
     int a1 [5]= {1,2,3,4,5}  ; 
    int *p = &a1[0] ; 

    printf("1 %d\r\n",a1[0]) ; 
    printf("2 %d\r\n",a1[1]) ; 
    printf("3 %d\r\n",a1[2]) ; 
    printf("4 %d\r\n",a1[3]) ; 
    printf("5 %d\r\n",a1[4]) ; 
    *p = 85 ;     
    *(p+1) = 22 ; 


    printf("%d\r\n",a1[0]) ; 
    printf("%d\r\n",a1[1]) ; 
    printf("%d\r\n",a1[2]) ; 
    printf("%d\r\n",a1[3]) ; 
    printf("%d\r\n",a1[4]) ; 

    
