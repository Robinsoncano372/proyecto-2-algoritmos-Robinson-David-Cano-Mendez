#iniciando el proyecto con la repeticion del menu
out = 'n'

while True:
    #El menu de opciones
    print("Menu de opciones:")
    print("1. suma de matrices")
    print("2. transponer matrices -")
    print("3. multiplicacion de matrices")
    print("4. Buscar numero en la matriz")
    print("5. contar palabras en cadena")
    print("6. ordenar letras en cadena")
    print("7. Detectar subcadena")
    print("8. Verificar palindromo")
    #Importando la libreria random para generar numeros aleatorios
    import random

    option = int(input("En el siguiente menu seleccione su accion a realizar: "))

    #Iniciando las opciones que el usuario puede elegir
    if option == 1:
        rows1 = int(input("Cuantas filas desea en la primer matriz?: "))
        columns1 = int(input("Cuantas columnas desea?: "))
        rows2 = int(input("Cuantas filas desea en la segunda matriz?: "))
        columns2 = int(input("Cuantas columnas desea?: "))

        if rows1 != rows2 or columns1 != columns2:
            print("No se pueden sumar las matrices")
        else:
            select = input("Desea generar los numeros aleatoriamente? (s/n): ")

            matrixa = []
            matrixb = []
            matrixr = []

            if select == 's':
                for i in range(rows1):
                    fila = []
                    for j in range(columns1):
                        fila.append(random.randint(0, 9))
                    matrixa.append(fila)

                for i in range(rows2):
                    fila = []
                    for j in range(columns2):
                        fila.append(random.randint(0, 9))
                    matrixb.append(fila)
            else:
                print("Ingrese los numeros de la matriz 1:")
                for i in range(rows1):
                    fila = []
                    for j in range(columns1):
                        fila.append(int(input(f"Elemento ({i+1},{j+1}): ")))
                    matrixa.append(fila)

                print("Ingrese los numeros de la matriz 2:")
                for i in range(rows2):
                    fila = []
                    for j in range(columns2):
                        fila.append(int(input(f"Elemento ({i+1},{j+1}): ")))
                    matrixb.append(fila)

            print("Matriz 1:")
            for i in range(rows1):
                for j in range(columns1):
                    print(matrixa[i][j], end="\t")
                print()

            print("Matriz 2:")
            for i in range(rows2):
                for j in range(columns2):
                    print(matrixb[i][j], end="\t")
                print()

            for i in range(rows1):
                fila = []
                for j in range(columns1):
                    fila.append(matrixa[i][j] + matrixb[i][j])
                matrixr.append(fila)

            print("La suma de las matrices es:")
            for i in range(rows1):
                for j in range(columns1):
                    print(matrixr[i][j], end="\t")
                print()

    elif option == 2:
        rows1 = int(input("Cuantas filas desea?: "))
        columns1 = int(input("Cuantas columnas desea?: "))

        matrixa = []
        matrixr = []

        select = input("Desea generar los numeros aleatoriamente? (s/n): ")

        if select == 's':
            for i in range(rows1):
                fila = []
                for j in range(columns1):
                    fila.append(random.randint(0, 9))
                matrixa.append(fila)
        else:
            print("Ingrese los numeros de la matriz:")
            for i in range(rows1):
                fila = []
                for j in range(columns1):
                    fila.append(int(input(f"Elemento ({i+1},{j+1}): ")))
                matrixa.append(fila)

        print("Matriz normal:")
        for i in range(rows1):
            for j in range(columns1):
                print(matrixa[i][j], end="\t")
            print()

        for i in range(columns1):
            fila = []
            for j in range(rows1):
                fila.append(matrixa[j][i])
            matrixr.append(fila)

        print("La transpuesta de la matriz es:")
        for i in range(columns1):
            for j in range(rows1):
                print(matrixr[i][j], end="\t")
            print()

    elif option == 3:
        rows1 = int(input("Cuantas filas desea en la primer matriz?: "))
        columns1 = int(input("Cuantas columnas desea?: "))
        rows2 = int(input("Cuantas filas desea en la segunda matriz?: "))
        columns2 = int(input("Cuantas columnas desea?: "))

        if columns1 != rows2:
            print("No se pueden multiplicar las matrices")
        else:
            select = input("Desea generar los numeros aleatoriamente? (s/n): ")

            matrixa = []
            matrixb = []
            matrixr = []

            if select == 's':
                for i in range(rows1):
                    fila = []
                    for j in range(columns1):
                        fila.append(random.randint(0, 9))
                    matrixa.append(fila)

                for i in range(rows2):
                    fila = []
                    for j in range(columns2):
                        fila.append(random.randint(0, 9))
                    matrixb.append(fila)
            else:
                print("Ingrese los numeros de la matriz 1:")
                for i in range(rows1):
                    fila = []
                    for j in range(columns1):
                        fila.append(int(input(f"Elemento ({i+1},{j+1}): ")))
                    matrixa.append(fila)

                print("Ingrese los numeros de la matriz 2:")
                for i in range(rows2):
                    fila = []
                    for j in range(columns2):
                        fila.append(int(input(f"Elemento ({i+1},{j+1}): ")))
                    matrixb.append(fila)

            print("Matriz 1:")
            for i in range(rows1):
                for j in range(columns1):
                    print(matrixa[i][j], end="\t")
                print()

            print("Matriz 2:")
            for i in range(rows2):
                for j in range(columns2):
                    print(matrixb[i][j], end="\t")
                print()

            for i in range(rows1):
                fila = []
                for j in range(columns2):
                    suma = 0
                    for k in range(columns1):
                        suma += matrixa[i][k] * matrixb[k][j]
                    fila.append(suma)
                matrixr.append(fila)

            print("La multiplicacion de las matrices es:")
            for i in range(rows1):
                for j in range(columns2):
                    print(matrixr[i][j], end="\t")
                print()

    elif option == 4:
        rows1 = int(input("Cuantas filas desea?: "))
        columns1 = int(input("Cuantas columnas desea?: "))

        matrixa = []

        select = input("Desea generar los numeros aleatoriamente? (s/n): ")

        if select == 's':
            for i in range(rows1):
                fila = []
                for j in range(columns1):
                    fila.append(random.randint(0, 9))
                matrixa.append(fila)
        else:
            print("Ingrese los numeros de la matriz:")
            for i in range(rows1):
                fila = []
                for j in range(columns1):
                    fila.append(int(input(f"Elemento ({i+1},{j+1}): ")))
                matrixa.append(fila)

        print("Matriz:")
        for i in range(rows1):
            for j in range(columns1):
                print(matrixa[i][j], end="\t")
            print()

        num = int(input("Ingrese el numero que necesita buscar: "))
        count = 0
        for i in range(rows1):
            for j in range(columns1):
                if matrixa[i][j] == num:
                    count += 1

        if count > 0:
            print(f"El numero {num} se encontro {count} veces en la matriz.")
        else:
            print(f"El numero {num} no se encontro en la matriz.")

    elif option == 5:
        cadena = input("Ingrese una cadena: ")
        contador = 0
        dentropalabra = False

        for c in cadena:
            if c != ' ' and not dentropalabra:
                contador += 1
                dentropalabra = True
            elif c == ' ':
                dentropalabra = False

        print(f"La cadena tiene {contador} palabra(s).")

    elif option == 6:
        cadena = list(input("Ingrese una cadena: "))

        for i in range(len(cadena) - 1):
            for j in range(i + 1, len(cadena)):
                if cadena[i] > cadena[j]:
                    temp = cadena[i]
                    cadena[i] = cadena[j]
                    cadena[j] = temp

        print("Cadena ordenada:", "".join(cadena))

    elif option == 7:
        cadena = input("Ingrese la cadena principal: ")
        subcadena = input("Ingrese la subcadena a buscar: ")

        encontrado = False
        for i in range(len(cadena) - len(subcadena) + 1):
            if cadena[i:i+len(subcadena)] == subcadena:
                encontrado = True
                break

        if encontrado:
            print("La subcadena se encontro en la cadena principal.")
        else:
            print("La subcadena no se encontro en la cadena principal.")

    elif option == 8:
        cadena = input("Ingrese una cadena: ")
        limpia = ""

        for c in cadena:
            if c != ' ':
                if 'A' <= c <= 'Z':
                    c = chr(ord(c) + (ord('a') - ord('A')))
                limpia += c

        esPalindromo = True
        n = len(limpia)
        for i in range(n // 2):
            if limpia[i] != limpia[n - 1 - i]:
                esPalindromo = False
                break

        if esPalindromo:
            print("La cadena ES un palindromo.")
        else:
            print("La cadena NO es un palindromo.")
    elif option < 1 or option > 8:
        print("Opcion no valida.")
    out = input("Desea realizar otra operacion? (s/n): ")
    if out != 's':
        break
