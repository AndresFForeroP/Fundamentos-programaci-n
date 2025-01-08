n = int(input("Ingrese el numero no mayor a 10^9 al cual desea separar en cifras y sumarlas  "))
while n <= 0 or n > 10000000000:
    n = int (input("Numero no valido, Inserte un numero no mayor a 10^9 "))
suma = 0
a = 0
inver = 0
cifras = 0
division = n
while division > 0:
    cifras = cifras + 1
    a = a + 1
    residuo = division % 10
    if residuo == 0:
        cifras = cifras - 1
    suma = suma + residuo
    division = division // 10
    residuo = inver + residuo 
    inver = residuo * 10 
inver = inver // 10
division = inver 
while division > 0:
    residuo = division % 10 
    division = division //10
    print(residuo , end="")
    cifras = cifras - 1
    if cifras > 0:
        print(" + ", end="")
print(" =",suma) 