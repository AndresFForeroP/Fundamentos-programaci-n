numero = int(input("Ingrese el Numero del elemento del cual desea saber su configuracion electronia "))
while numero > 118 or numero < 1:
    numero = int(input("Numero atomico invalido, ingrese un numero entre 1 y 118 "))
elem = str(input("Ingrese el Nombre del elemento "))
print("numero",numero,"elemento",elem)
subni =["1s","2s","2p","3s","3p","4s","3d","4p","5s","4d","5p","6s","4f","5d","6p","7s","5f","6d","7p"]
if numero > 0:
    config = subni[0] 
    nconfig = numero
if numero > 2:
    config = config + "2 " + subni[1]
    nconfig = numero - 2
if numero > 4:
    config = config + "2 " + subni[2]
    nconfig = numero - 4
if numero > 10:
    config = config + "6 " + subni[3]
    nconfig = numero - 10
if numero > 12:
    config = config + "2 " + subni[4]
    nconfig = numero - 12
if numero > 18:
    config = config + "6 " + subni[5]
    nconfig = numero - 18
if numero > 20:
    config = config + "2 " + subni[6]
    nconfig = numero - 20
if numero > 30:
    config = config + "10 " + subni[7]
    nconfig = numero - 30
if numero > 36:
    config = config + "6 " + subni[8]
    nconfig = numero - 36
if numero > 38:
    config = config + "2 " + subni[9]
    nconfig = numero - 38
if numero > 48:
    config = config + "10 " + subni[10]
    nconfig = numero - 48
if numero > 54:
    config = config + "6 " + subni[11]
    nconfig = numero - 54
if numero > 56:
    config = config + "2 " + subni[12]
    nconfig = numero - 56
if numero > 70:
    config = config + "14 " + subni[13]
    nconfig = numero - 70
if numero > 80:
    config = config + "10 " + subni[14]
    nconfig = numero - 80
if numero > 86:
    config = config + "6 " + subni[15]
    nconfig = numero - 86
if numero > 88:
    config = config + "2 " + subni[16]
    nconfig = numero - 88
if numero > 102:
    config = config + "14 " + subni[17]
    nconfig = numero - 102
if numero > 112:
    config = config + "10 " + subni[18]
    nconfig = numero - 112
print("la configuracion electronica del",elem,"con numero atomico",numero,"es")
print(config,nconfig,sep="")