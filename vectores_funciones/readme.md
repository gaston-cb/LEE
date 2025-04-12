# 🧠 Ejercicios de Programación en C: Vectores y Funciones

Este conjunto de ejercicios está diseñado para practicar **vectores** y **funciones** en lenguaje C, utilizando **pasaje de parámetros** exclusivamente.

Cada ejercicio incrementa ligeramente la dificultad, incorporando conceptos clave de programación estructurada.

---


## 📘 Ejercicios

### 1. Mostrar un vector

**Objetivo:** Crear un vector de enteros y mostrar sus elementos con una función.

- Crear un vector de 5 enteros fijos.
- Pasarlo a una función `mostrar_vector` que imprima sus elementos.

---

### 2. Cargar un vector desde teclado

**Objetivo:** Cargar los elementos de un vector desde el teclado usando una función.

- Crear un vector de 5 enteros.
- Usar `cargar_vector(int *v, int tam)` para llenarlo.
- Mostrarlo con la función del ejercicio anterior.

---

### 3. Calcular el promedio

**Objetivo:** Calcular el promedio de los valores de un vector.

- Reutilizar `cargar_vector`.
- Crear `float promedio(int *v, int tam)` que devuelva el promedio.

---

### 4. Contar elementos mayores que X

**Objetivo:** Contar cuántos elementos del vector son mayores a un número dado.

- Crear la función `int contar_mayores(int *v, int tam, int x)`.

---

### 5. Buscar un valor

**Objetivo:** Buscar un valor dentro del vector y devolver su posición (índice).

- Crear `int buscar(int v[], int tam, int valor)` que devuelva el índice o `-1` si no está.

---


### 6. Calcular el máximo y mínimo

**Objetivo:** Encontrar el valor máximo y mínimo del vector.

- Crear `void max_min(int v[], int tam, int *max, int *min)`.
- Usar punteros para devolver ambos valores desde la función.

---

### 7. Invertir el vector

**Objetivo:** Invertir el contenido del vector (el primer elemento pasa a ser el último, etc.)

- Crear `void invertir(int *v, int tam)` que modifique el vector original. Mostrarlo en pantalla 

---
### 8. DIvisión 

**Objetivo:** Manejar errores no forzados

- En el ejemplo1 (ejemplo1.c) realiza las cuatro operaciones básicas. Pensar que pasaría si quiero dividir por cero. Encuentre la forma que esto no ocurra

## 📌 Nota
 Se recomienda modularizar el código y practicar la reutilización de funciones. Usar `srand(time(NULL))` para llenar un vector aleatorio.(ver ejemplo de promedio como se usa) 

---

## 🚀 Extra (opcional)

