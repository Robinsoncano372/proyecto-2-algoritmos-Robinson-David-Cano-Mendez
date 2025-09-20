# Proyecto 2 información importante

Para este proyecto vamos a remarcar toda la información del programa y todos los códigos utilizados segun los siguientes manuales.


# Manual Técnico

## Visual Studio Code (C++ y Python)
### Requisitos:
- Procesador ARM64 o x64
- Memoria RAM Mínimo 1 GB de RAM.
- tener espacio disponible siendo más de 1 GB.
- Tarjeta de video que soporte para una resolución mínima de WXGA (1366 x 768).
- Windows: 10 o 11 (64 bits)
- macOS: Versiones que soportan las actualizaciones de seguridad de Apple.
- Linux: Se recomiendan versiones como Ubuntu 20.04 o Debian 10 (para Debian), o Red Hat Enterprise Linux 8 o Fedora 36 (para Red Hat).

### Instalación 

1. Descargar Visual Studio Code desde el siguiente enlace [Visual Studio Code](https://code.visualstudio.com) seleccionando tu sistema operativo y la descarga sera automatica.

2. Entrar al archivo .exe, aceptar los terminos y condiciones y instalar el programa con el directorio deseado

3. Ahora abra el programa y dirigase a la sección de extensiones (icono de 4 cuadrados en la esquina izquierda) y busque las extensiones para los lenguajes de códigos.

4. Para instalar Python solamente busca en el menú de extensiones "Python" y escoja la opcion que esta nombrado de la misma manera, esto descargara las demas extensiones de python.

5. Con C++ dejare un video de youtube de apoyo para estos pasos [Descargar y Instalar C++](https://youtu.be/7EhviIt5ems?si=oUq9hY084NOEOrar), ahora para guiar con el video, primero debemos descargar [Mingw](https://sourceforge.net/projects/mingw) y seguir los pasos del video (del minuto 0:57 hasta el 4:14), luego al igual que Python descargamos en la seccion de extensiones C++ que aparecera como "C/C++", sucesivamente buscamos y descargamos la extension "Code Runner" y realizar las configuraciones del video (Del minuto 5:22 hasta el 6:33).


# MANUAL DE USUARIO
Ahora se explicara como funciona el programa y como debe usarse correctamente aplicando esto en los 3 idionas

- El programa sobre los arreglos inicia con un menu donde debemos elegir 8 de las opciones para que el programa las opere, se usa un `Switch` para que se pueda escoger por medio del numero que indica la opcion.
1. suma de matrices
2. transponer matrices
3. multiplicacion de matrices
4. Buscar numero en la matriz
5. contar palabras en cadena
6. ordenar letras en cadena
7. Detectar subcadenas
8. Verificar palindromo

El programa usa una función `Do - While` que permite que el proceso de el menú se repita a menos que seleccione la opción salir. Debe ingresar uno de los 8 números dependiendo la acción que quiera hacer, si escoge un numero que no sea uno de esos 8, el programa lo tomara como un dato erroneo y te volvera a aparecer el menú.

## Importante
En todas las opciones que se usan las matrices, te pedira las dimensiones de las matrices (lineas,columnas) que vas a operar, y te preguntara si deseas llenar las matrices con numeros aleatorios gracias a los codigos de numeros aleatorios siendo `srand(time(NULL))` y `rand() % 10` o si deseas tambien llenar las matrices manualmente colocando los numeros en las lineas y columnas de tu eleccion, con esto dicho veamos las opciones.

### 1. Suma de matrices
- Si selecciona la opción 1 se solicitara al usuario llenar 2 matrices las cuales se sumaran para crear una tercer matriz con los resultados de dichas sumas, si sumamos esta matriz:
$$
\begin{array}{cc}
1 & 2 \\
3 & 4
\end{array}
$$

Con esta otra:

$$
\begin{array}{cc}
4 & 5 \\
3 & 6
\end{array}
$$

Nos da como resultado:

$$
\begin{array}{cc}
5 & 7 \\
6 & 10
\end{array}
$$


Para crear cada matriz y llenarla se usan `for`con la siguiente estructura

                for (int i = 0; i < rows1; i++)
                    for (int j = 0; j < columns1; j++)
                    {
                        cout << "Elemento (" << i + 1 << "," << j + 1 << "): ";
                        cin >> matrix[i][j];
                    }
                
y para realizar la suma utilizamos la misma estructura pero declarando los datos de las variables los cuales seran iguales a `matrixr[i][j] = matrixa[i][j] + matrixb[i][j];`

### 2. Transponer matrices
Esta opcion nos permite crear una matriz y de esta saldra la transpuesta de la matriz, una matriz transpuesta es cuando intercambiamos los valores de las filas con los valores de las columnas ordenandolas como en el siguiente ejemplo:

Matriz normal:
$$
\begin{array}{cc}
4 & 5 \\
1 & 6
\end{array}
$$

Matriz transpuesta:

$$
\begin{array}{cc}
4 & 1 \\
5 & 6
\end{array}
$$




### 3. Salir






# FIN