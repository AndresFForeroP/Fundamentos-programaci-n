from datetime import datetime as dt
fecha1 = str(input("ingrese la primer fecha en el siguiente formato DD MM YYYY "))
fecha2 = str(input("ingrese la fecha final en el siguiente formato DD MM YYYY "))
fecha1 = dt.strptime(fecha1,"%d %m %Y")
fecha2 = dt.strptime(fecha2,"%d %m %Y")
diferencia = fecha2 - fecha1
print("la diferencia entre las dos fechas es de",diferencia.days,"dias")