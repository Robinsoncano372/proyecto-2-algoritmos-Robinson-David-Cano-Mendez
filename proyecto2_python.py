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

    #Opcion 1: Suma de matrices
    if option == 1:
        #ingresando las dimensiones de las matrices
        rows1 = int(input("Cuantas filas desea en la primer matriz?: "))
        columns1 = int(input("Cuantas columnas desea?: "))
        rows2 = int(input("Cuantas filas desea en la segunda matriz?: "))
        columns2 = int(input("Cuantas columnas desea?: "))

        #Condicional para verificar si las matrices se pueden sumar (dEben tener las mismas dimensiones)
        if rows1 != rows2 or columns1 != columns2:
            print("No se pueden sumar las matrices")
        else:
            #preguntando si desea generar los numeros aleatoriamente o ingresarlos manualmente
            select = input("Desea generar los numeros aleatoriamente? (s/n): ")

            matrixa = []
            matrixb = []
            matrixr = []

            #Generando numeros aleatorios
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
            #Ingresando los numeros manualmente
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

            #Mostrando las matrices ingresadas
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

            #realizando la suma de las matrices creando la nueva matriz con los resultados
            for i in range(rows1):
                fila = []
                for j in range(columns1):
                    fila.append(matrixa[i][j] + matrixb[i][j])
                matrixr.append(fila)

            #Mostrando la matriz resultante
            print("La suma de las matrices es:")
            for i in range(rows1):
                for j in range(columns1):
                    print(matrixr[i][j], end="\t")
                print()

    #Opcion 2: Transponer matrices
    elif option == 2:
        #ingresando las dimensiones de la matriz
        rows1 = int(input("Cuantas filas desea?: "))
        columns1 = int(input("Cuantas columnas desea?: "))

        matrixa = []
        matrixr = []

        #Preguntando si desea generar los numeros aleatoriamente o ingresarlos manualmente
        select = input("Desea generar los numeros aleatoriamente? (s/n): ")

        #Generando numeros aleatorios
        if select == 's':
            for i in range(rows1):
                fila = []
                for j in range(columns1):
                    fila.append(random.randint(0, 9))
                matrixa.append(fila)

        #Ingresando los numeros manualmente
        else:
            print("Ingrese los numeros de la matriz:")
            for i in range(rows1):
                fila = []
                for j in range(columns1):
                    fila.append(int(input(f"Elemento ({i+1},{j+1}): ")))
                matrixa.append(fila)

        #Mostrando la matriz ingresada
        print("Matriz normal:")
        for i in range(rows1):
            for j in range(columns1):
                print(matrixa[i][j], end="\t")
            print()

        #Realizando la transposicion de la matriz cambiando filas por columnas
        for i in range(columns1):
            fila = []
            for j in range(rows1):
                fila.append(matrixa[j][i])
            matrixr.append(fila)

        #Mostrando la matriz transpuesta
        print("La transpuesta de la matriz es:")
        for i in range(columns1):
            for j in range(rows1):
                print(matrixr[i][j], end="\t")
            print()

    #Opcion 3: Multiplicacion de matrices
    elif option == 3:
        #ingresando las dimensiones de las matrices
        rows1 = int(input("Cuantas filas desea en la primer matriz?: "))
        columns1 = int(input("Cuantas columnas desea?: "))
        rows2 = int(input("Cuantas filas desea en la segunda matriz?: "))
        columns2 = int(input("Cuantas columnas desea?: "))

        #Condicion para verificar si las matrices se pueden multiplicar (El numero de columnas de la primera matriz debe ser igual al numero de filas de la segunda matriz)
        if columns1 != rows2:
            print("No se pueden multiplicar las matrices")
        else:
            #preguntando si desea generar los numeros aleatoriamente o ingresarlos manualmente
            select = input("Desea generar los numeros aleatoriamente? (s/n): ")

            matrixa = []
            matrixb = []
            matrixr = []
            
            #Generando numeros aleatorios
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

            #Ingresando los numeros manualmente
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

            #Mostrando las matrices ingresadas
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

            #Realizando la multiplicacion de las matrices creando la nueva matriz con los resultados
            for i in range(rows1):
                fila = []
                for j in range(columns2):
                    multi = 0
                    for k in range(columns1):

                        multi += matrixa[i][k] * matrixb[k][j]
                    fila.append(multi)
                matrixr.append(fila)

            #Mostrando la matriz con el resultado de la multiplicacion
            print("La multiplicacion de las matrices es:")
            for i in range(rows1):
                for j in range(columns2):
                    print(matrixr[i][j], end="\t")
                print()
    
    #Opcion 4: Buscar numero en la matriz
    elif option == 4:
        #ingresando las dimensiones de la matriz
        rows1 = int(input("Cuantas filas desea?: "))
        columns1 = int(input("Cuantas columnas desea?: "))

        matrixa = []
        
        #Preguntando si desea generar los numeros aleatoriamente o ingresarlos manualmente
        select = input("Desea generar los numeros aleatoriamente? (s/n): ")
       
        #Generando numeros aleatorios
        if select == 's':
            for i in range(rows1):
                fila = []
                for j in range(columns1):
                    fila.append(random.randint(0, 9))
                matrixa.append(fila)

        #Ingresando los numeros manualmente
        else:
            print("Ingrese los numeros de la matriz:")
            for i in range(rows1):
                fila = []
                for j in range(columns1):
                    fila.append(int(input(f"Elemento ({i+1},{j+1}): ")))
                matrixa.append(fila)

        #Mostrando la matriz ingresada
        print("Matriz:")
        for i in range(rows1):
            for j in range(columns1):
                print(matrixa[i][j], end="\t")
            print()

        #Buscando el numero en la matriz y contando cuantas veces se encuentra
        num = int(input("Ingrese el numero que necesita buscar: "))
        count = 0
        for i in range(rows1):
            for j in range(columns1):
                if matrixa[i][j] == num:
                    count += 1

        #Mostrando el resultado de la busqueda
        if count > 0:
            print(f"El numero {num} se encontro {count} veces en la matriz.")
        else:
            print(f"El numero {num} no se encontro en la matriz.")

    #Opcion 5: Contar palabras en cadena
    elif option == 5:
        #ingresando la cadena y definiendo el contador y la variable para saber si se esta dentro de una palabra
        cadena = input("Ingrese una cadena: ")
        contador = 0
        dentropalabra = False
        #Codigo para contar las palabras y para no contar espacios 
        for c in cadena:
            if c != ' ' and not dentropalabra:
                contador += 1
                dentropalabra = True
            elif c == ' ':
                dentropalabra = False
        #Mostrando el resultado del conteo
        print(f"La cadena tiene {contador} palabra(s).")

    #Opcion 6: Ordenar letras en cadena
    elif option == 6:
        #ingresando la cadena y convirtiendola en una lista para poder modificarla
        cadena = list(input("Ingrese una cadena: "))

        #Ordenando la cadena usando el metodo de la burbuja
        for i in range(len(cadena) - 1):
            for j in range(i + 1, len(cadena)):
                if cadena[i] > cadena[j]:
                    temp = cadena[i]
                    cadena[i] = cadena[j]
                    cadena[j] = temp

        #Mostrando la cadena ordenada
        print("Cadena ordenada:", "".join(cadena))

    #Opcion 7: Detectar subcadena
    elif option == 7:
        #ingresando la cadena principal y la subcadena a buscar
        cadena = input("Ingrese la cadena principal: ")
        subcadena = input("Ingrese la subcadena a buscar: ")
        
        #Buscando la subcadena en la cadena principal
        encontrado = False
        for i in range(len(cadena) - len(subcadena) + 1):
            if cadena[i:i+len(subcadena)] == subcadena:
                encontrado = True
                break

        #Mostrando el resultado de la busqueda
        if encontrado:
            print("La subcadena se encontro en la cadena principal.")
        else:
            print("La subcadena no se encontro en la cadena principal.")

    #Opcion 8: Verificar palindromo
    elif option == 8:
        #ingresando la cadena 
        cadena = input("Ingrese una cadena: ")
        #Limpiando la cadena de espacios
        limpia = ""
        #Conviertiendo cualquier letra mayuscula en minuscula
        for c in cadena:
            if c != ' ':
                if 'A' <= c <= 'Z':
                    c = chr(ord(c) + (ord('a') - ord('A')))
                limpia += c

        #Verificando si la cadena es un palindromo
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
    #Si se ingresa una opcion que no esta en el menu
    elif option < 1 or option > 8:
        print("Opcion no valida.")
    #Preguntando si desea realizar otra operacion
    out = input("Desea realizar otra operacion? (s/n): ")
    #Si la respuesta no es 's' se sale del ciclo y termina el programa
    if out != 's':
        break
