suma = 0
base = int(input("ingrese un numero entre 1 y 100 para usar como base del ejercicio " ))
while base > 100 or base <= 0:
    base = int(input("Numero invalido, ingrese un numero entre 1 y 100 para usar como base del ejercicio "))
exp = int(input("ingrese un numero entre 0 y 1000000 para usar como exponente del ejercicio "))
while exp > 1000000 or exp < 0:
    exp = int(input("Numero invalido, ingrese un numero entre 0 y 1000000 para usar como exponente del ejericicio "))
for i in range(0,exp + 1):
    potencia = pow(base,i)
    suma = suma + potencia
print("el numero",base,"^",exp,"tiene como resultado",suma)   