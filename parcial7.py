while 1:
    verbo = str(input("Ingrese el verbo en presente simpre o escriba salir para salir del programa "))
    while verbo[len(verbo) - 1] != "r":
        verbo = str(input("No es un verbo, ingrese un verbo o salir para salir del programa "))
    if verbo == "salir" or verbo == "Salir" or verbo == "SALIR":
        print("saliste del programa")
        break
    while verbo[len(verbo) - 2] != "i" and verbo[len(verbo) - 2] != "a" and verbo[len(verbo) - 2] != "e":
        verbo = str(input("No es un verbo en presente simpre,inserte un verbo valido "))
    tiempo = str(input("Ingrese el tiempo al que desea pasar el verbo A = presente P = pasado F = furuto o escriba T para salir "))
    while tiempo != "A" and tiempo != "a" and tiempo != "P" and tiempo != "p" and tiempo != "F" and tiempo != "f" and tiempo != "T" and tiempo != "t":
        print(tiempo,"no es un tiempo valido")
        tiempo = str(input("Ingrese el tiempo al que desea pasar el verbo A = presente P = pasado F = furuto o escriba T para salir "))
    verbof1 = verbo[:len(verbo) - 1] + verbo[len(verbo):]
    verbof2 = verbo[:len(verbo) - 2] + verbo[len(verbo) + 1:]
    if tiempo == "T" or tiempo == "t":
        print("Saliste del programa")
        break
    if tiempo == "A" or tiempo == "a":
        if verbo[len(verbo) - 2] == "i" or verbo[len(verbo) - 2] == "I":
            print("yo",verbof2 + "o")
            print("tu",verbof2 + "es")
            print("el",verbof2 + "e")
            print("nosotros",verbof1 + "mos")
            print("vosotros",verbof1 +"s")
            print("ellos",verbof2 + "en")
        else :
            print("yo",verbof2 + "o")
            print("tu",verbof1 + "s")
            print("el",verbof1)
            print("nosotros",verbof1 + "mos")
            print("vosotros",verbof1 +"is")
            print("ellos",verbof1 + "n")
    if tiempo == "P" or tiempo == "p":
        if verbo[len(verbo) - 2] == "A" or verbo[len(verbo) - 2] == "a":
            print("yo",verbof2 + "e")
            print("tu",verbof1 + "ste")
            print("el",verbof2 + "o")
            print("nosotros",verbof1 + "mos")
            print("vosotros",verbof1 +"steis")
            print("ellos",verbof1 + "ron")
        else :
            print("yo",verbof2 + "i")
            print("tu",verbof2 + "iste")
            print("el",verbof2 + "io")
            print("nosotros",verbof2 + "imos")
            print("vosotros",verbof2 +"isteis")
            print("ellos",verbof2 + "ieron")
    if tiempo == "F" or tiempo == "f":
            print("yo",verbof1 + "re")
            print("tu",verbof1 + "ras")
            print("el",verbof1 + "ra")
            print("nosotros",verbof1 + "remos")
            print("vosotros",verbof1 +"reis")
            print("ellos",verbof1 + "ran")