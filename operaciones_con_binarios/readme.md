Este documento contiene ejercicios para practicar operaciones con números en **hexadecimal y binario**, sumas, restas y desbordamientos en sistemas de **8 bits con signo**.

## 📌 Reglas
- Trabajaremos con enteros de **8 bits con signo** (`int8_t` en C, valores de `-128` a `127`).
- Representaremos los valores en **hexadecimal** (`0xNN`) y **binario** (`0bNNNNNNNN`).
- Analizaremos **desbordamientos** cuando las operaciones excedan el rango permitido.

---

## 🚀 Ejercicios

### 1️⃣ Suma simple en hexadecimal
Convierte los siguientes valores hexadecimales a decimal y realiza la suma:
- 0x1E + 0x0A = ?

1. Expresa el resultado en **decimal**, **hexadecimal** y **binario**.
2. Indica si hay desbordamiento en un sistema de 8 bits con signo.

---

###  Resta con números negativos
Convierte los siguientes valores hexadecimales a decimal y realiza la resta:
 - 0xF6 - 0x05 = ?
 - 0x7F + 0x03 = ?
 - 0x7F + 0x03 = ?
 - 0x80 - 0x01 = ?
 - (0x7C + 0x07) - (0x85) = ?

1. Explica cómo se representa el valor `0xF6` en complemento a dos.
2. Expresa el resultado en **decimal**, **hexadecimal** y **binario**.
3. ¿Ocurre desbordamiento?
4. Explica por qué `0x7F` es el mayor valor positivo en un sistema de 8 bits con signo.
5. Explica por qué `0x80` representa el menor valor negativo en complemento a dos.
6. ¿Qué ocurre con el desbordamiento? ¿El resultado es válido en 8 bits?
7. Programe las operaciones en C dentro de un mismo archivo 










