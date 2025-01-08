numero = int(input("ingrese el numero entre 1 y 3999 que desea convertir a romano "))
while numero > 3999 or numero <=0:
    numero = int(input("Numero no valido, ingrese un numero entre 1 y 3999 "))
millar = int(numero/1000)*1000
centena = int((numero - millar)/100)*100
decena = int((numero - millar - centena)/10)*10
unidad = int((numero - millar - centena - decena))
rom = str()
if millar == 3000:
    rom = rom + "MMM"
if millar == 2000:
    rom = rom + "MM"
if millar == 1000:
    rom = rom + "M"
if centena == 900:
    rom = rom + "CM"
if centena == 800:
    rom = rom + "DCCC"
if centena == 700:
    rom = rom + "DCC"
if centena == 600:
    rom = rom + "DC"
if centena == 500:
    rom = rom + "D"
if centena == 400:
    rom = rom + "CD"
if centena == 300:
    rom = rom + "CCC"
if centena == 200:
    rom = rom + "CC"
if centena == 100:
    rom = rom + "C"
if decena  == 90:
    rom = rom + "XC"
if decena  == 80:
    rom = rom + "LXXX"
if decena  == 70:
    rom = rom + "LXX"
if decena  == 60:
    rom = rom + "LX"
if decena  == 50:
    rom = rom + "L"
if decena  == 40:
    rom = rom + "XL"
if decena  == 30:
    rom = rom + "XXX"
if decena  == 20:
    rom = rom + "XX"
if decena  == 10:
    rom = rom + "X"
if unidad == 9:
    rom = rom + "IX"
if unidad == 8:
    rom = rom + "VIII"
if unidad == 7:
    rom = rom + "VII"
if unidad == 6:
    rom = rom + "VI"
if unidad == 5:
    rom = rom + "V"
if unidad == 4:
    rom = rom + "IV"
if unidad == 3:
    rom = rom + "III"
if unidad == 2:
    rom = rom + "II"
if unidad == 1:
    rom = rom + "I"
print("El numero",numero, "en romano es",rom)