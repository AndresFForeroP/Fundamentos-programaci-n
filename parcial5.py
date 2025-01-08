import random as rnd
numero = int(input("Ingrese el numero de datos aleatorios que desea generar "))
numeros = [numero]
mayor = []
for i in range(0,numero):
    numeros.append(int(11 * rnd.random()))
numeros.sort()
print("los", numero, "numeros generados aleatoriamente son ")
for i in range(0,numero):
    print(numeros[i], end=" ")
media = numeros[(numero//2)-1]
print("")
print ("la media de los numeros es",media)
for i in range(0,numero):
    if numeros[i] > media:
        mayor.append(numeros[i])
print("todos los numeros mayores que la media son",mayor)