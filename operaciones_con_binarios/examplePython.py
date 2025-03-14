def mostrar_resultados(a, b):
    suma = a + b
    resta = a - b
    print(f"Suma: {a:#x} + {b:#x} = {suma:#x} ({suma:#b})")
    print(f"Resta: {a:#x} - {b:#x} = {resta:#x} ({resta:#b})")
    print("-" * 40)

# Valores de 8 bits con signo (-128 a 127)
a = 0x7F  # 127 en decimal (0111 1111)
b = 0x02  # 2 en decimal (0000 0010)
mostrar_resultados(a, b)

# Caso de desbordamiento positivo
a = 0x7F  # 127
b = 0x01  # 1
mostrar_resultados(a, b)  # Se espera 0x80 (-128 en complemento a dos)

# Caso de desbordamiento negativo
a = 0x80  # -128 en complemento a dos
b = -0x01 # -1
mostrar_resultados(a, b)  # Se espera 0x7F (127)
