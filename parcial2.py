n = int(input("Ingrese el Numero entre 2 y 100000 "))
while n < 2 or n > 100000:
    n = int(input("Numero no valido, ingrese un numero entre 2 y 100000 "))
numero = [n]
conteo = 0
for i in range (1,n+1):
    if i % 2 == 0:
        numero.append(i)
        conteo = conteo + 1
numero.sort()
x = 2
while x < len(numero) - 1:
    for i in range (0,len(numero) - 1,x):
        if i < len(numero) - 1 :
            numero.pop(i) 
    x = x + 1
numero.sort(reverse=True)
print(n," = ",end=" ")
for i in range (1,len(numero)):
    print(numero[i],end=" ")