//Proyecto 2 Algoritmos --- Robinson David Cano Méndez
//iniciando el programa con las librerias utilizadas
#include <iostream>
#include <ctime>
#include <string.h>
using namespace std;
int main()
{
    ///La declaracion de variables
    int rows1, rows2, columns1, columns2, option;
    char select;
    //Creando la repeticion del menu
    char out('n');
    do
    {
        int i; 
        //En este menu se muestran las opciones que el usuario puede elegir
        cout << "Menu de opciones: " << endl;
        cout << "1. suma de matrices" << endl;
        cout << "2. transponer matrices" << endl;
        cout << "3. multiplicacion de matrices" << endl;
        cout << "4. Buscar numero en la matriz" << endl;
        cout << "5. contar palabras en cadena" << endl;
        cout << "6. ordenar letras en cadena" << endl;
        cout << "7. Detectar subcadenas" << endl;
        cout << "8. Verificar palindromo" << endl;
        cout << "En el siguiente menu seleccione su accion a realizar: ";
        cin >> option;
        //Se lee la opcion que el usuario eligio
        switch (option)
        {

        //iniciando las opciones que el usuario puede elegir

        //Opcion 1: Suma de matrices
        case 1:
        {
            //El usuario ingresa las dimensiones de las matrices
            cout << "Cuantas filas desea en la primer matriz?: ";
            cin >> rows1;
            cout << "Cuantas columnas desea?: ";
            cin >> columns1;
            cout << "Cuantas filas desea en la segunda matriz?: ";
            cin >> rows2;
            cout << "Cuantas columnas desea?: ";
            cin >> columns2;
            int matrixa[rows1][columns1], matrixb[rows2][columns2], matrixr[rows1][columns1];

            //Esta condicion funciona para verificar si las matrices se pueden sumar (deben tener las mismas dimensiones)
            if (rows1 != rows2 || columns1 != columns2)
            {
                cout << "No se pueden sumar las matrices" << endl;
                break;
            }
            //El usuario elige si quiere que los numeros se generen aleatoriamente o si los ingresa manualmente
            cout << "Desea generar los numeros aleatoriamente? (s/n): ";
            cin >> select;

            //Apartado para generar los numeros aleatoriamente en las matrices
            if (select == 's')
            {
                srand(time(NULL));
                for (int i = 0; i < rows1; i++)
                    for (int j = 0; j < columns1; j++)
                        matrixa[i][j] = rand() % 10;

                for (int i = 0; i < rows2; i++)
                    for (int j = 0; j < columns2; j++)
                        matrixb[i][j] = rand() % 10;
            }
            else
            {
                //Apartado para que el usuario ingrese los numeros manualmente en las matrices

                //Agregando los numeros de la primer matriz
                cout << "Ingrese los numeros de la matriz 1:" << endl;
                for (int i = 0; i < rows1; i++)
                    for (int j = 0; j < columns1; j++)
                    {
                        cout << "Elemento (" << i + 1 << "," << j + 1 << "): ";
                        cin >> matrixa[i][j];
                    }
                //Agregando los numeros de la segunda matriz
                cout << "Ingrese los numeros de la matriz 2:" << endl;
                for (int i = 0; i < rows2; i++)
                    for (int j = 0; j < columns2; j++)
                    {
                        cout << "Elemento (" << i + 1 << "," << j + 1 << "): ";
                        cin >> matrixb[i][j];
                    }
            }
            //Aqui se mostraran las matrices que el usuario ingreso o que se generaron aleatoriamente
            cout << "Matriz 1:\n";
            for (int i = 0; i < rows1; i++)
            {
                for (int j = 0; j < columns1; j++)
                    cout << matrixa[i][j] << "\t";
                cout << endl;
            }

            cout << "Matriz 2:\n";
            for (int i = 0; i < rows2; i++)
            {
                for (int j = 0; j < columns2; j++)
                    cout << matrixb[i][j] << "\t";
                cout << endl;
            }

            //Se crea la matriz resultante mediante la suma de las dos matrices anteriores
            for (int i = 0; i < rows1; i++)
                for (int j = 0; j < columns1; j++)
                    matrixr[i][j] = matrixa[i][j] + matrixb[i][j];

                    //Se muestra la respuesta de la suma de las matrices
            cout << "La suma de las matrices es:\n";
            for (int i = 0; i < rows1; i++)
            {
                for (int j = 0; j < columns1; j++)
                    cout << matrixr[i][j] << "\t";
                cout << endl;
            }
        }
        break;
        //Opcion 2: Transponer matrices
        case 2:
        {
            //El usuario ingresa las dimensiones de las matrices
            cout << "Cuantas filas desea?: ";
            cin >> rows1;
            cout << "Cuantas columnas desea?: ";
            cin >> columns1;
            int matrixa[rows1][columns1], matrixr[columns1][rows1];

            //El usuario elige si quiere que los numeros se generen aleatoriamente o si los ingresa manualmente
            cout << "Desea generar los numeros aleatoriamente? (s/n): ";
            cin >> select;

            if (select == 's')
            {
                //Generando numeros aleatorios
                srand(time(NULL));
                for (int i = 0; i < rows1; i++)
                    for (int j = 0; j < columns1; j++)
                        matrixa[i][j] = rand() % 10;
            }
            else
            {
                //Ingresando los numeros manualmente
                cout << "Ingrese los numeros de la matriz:" << endl;
                for (int i = 0; i < rows1; i++)
                    for (int j = 0; j < columns1; j++)
                    {
                        cout << "Elemento (" << i + 1 << "," << j + 1 << "): ";
                        cin >> matrixa[i][j];
                    }
            }
            //Mostrando la matriz antes de ser transpuesta
            cout << "Matriz normal:\n";
            for (int i = 0; i < rows1; i++)
            {
                for (int j = 0; j < columns1; j++)
                    cout << matrixa[i][j] << "\t";
                cout << endl;
            }
            //Creando la matriz transpuesta
            for (int i = 0; i < rows1; i++)
                for (int j = 0; j < columns1; j++)
                //Invirtiendo filas por columnas
                    matrixr[i][j] = matrixa[j][i];

            //Mostrando la matriz transpuesta
            cout << "La transpuesta de la matriz es:\n";
            for (int i = 0; i < rows1; i++)
            {
                for (int j = 0; j < columns1; j++)
                    cout << matrixr[i][j] << "\t";
                cout << endl;
            }
        }
        break;

        //Opcion 3: Multiplicacion de matrices
        case 3:
        {
            //El usuario ingresa las dimensiones de las matrices
            cout << "Cuantas filas desea en la primer matriz?: ";
            cin >> rows1;
            cout << "Cuantas columnas desea?: ";
            cin >> columns1;
            cout << "Cuantas filas desea en la segunda matriz?: ";
            cin >> rows2;
            cout << "Cuantas columnas desea?: ";
            cin >> columns2;
            int matrixa[rows1][columns1], matrixb[rows2][columns2], matrixr[rows1][columns2];
            
            //Verificar si las matrices se pueden multiplicar (El numero de columnas de la primer matriz debe ser igual al numero de filas de la segunda matriz)
            if (columns1 != rows2)
            {
                cout << "No se pueden multiplicar las matrices" << endl;
                break;
            }
            //El usuario elige si quiere que los numeros se generen aleatoriamente o si los ingresa manualmente
            cout << "Desea generar los numeros aleatoriamente? (s/n): ";
            cin >> select;

            if (select == 's')
            {   
                //Generando numeros aleatorios
                srand(time(NULL));
                for (int i = 0; i < rows1; i++)
                    for (int j = 0; j < columns1; j++)
                        matrixa[i][j] = rand() % 10;

                for (int i = 0; i < rows2; i++)
                    for (int j = 0; j < columns2; j++)
                        matrixb[i][j] = rand() % 10;
            }
            else
            {
                //Ingresando los numeros manualmente
                cout << "Ingrese los numeros de la matriz 1:" << endl;
                for (int i = 0; i < rows1; i++)
                    for (int j = 0; j < columns1; j++)
                    {
                        cout << "Elemento (" << i + 1 << "," << j + 1 << "): ";
                        cin >> matrixa[i][j];
                    }

                cout << "Ingrese los numeros de la matriz 2:" << endl;
                for (int i = 0; i < rows2; i++)
                    for (int j = 0; j < columns2; j++)
                    {
                        cout << "Elemento (" << i + 1 << "," << j + 1 << "): ";
                        cin >> matrixb[i][j];
                    }
            }

            //Mostrando las matrices que el usuario ingreso o que se generaron aleatoriamente
            cout << "Matriz 1:\n";
            for (int i = 0; i < rows1; i++)
            {
                for (int j = 0; j < columns1; j++)
                    cout << matrixa[i][j] << "\t";
                cout << endl;
            }

            cout << "Matriz 2:\n";
            for (int i = 0; i < rows2; i++)
            {
                for (int j = 0; j < columns2; j++)
                    cout << matrixb[i][j] << "\t";
                cout << endl;
            }

            //Creando la matriz que tendra la respuesta de la multiplicacion de las dos matrices anteriores
            for (int i = 0; i < rows1; i++)
                for (int j = 0; j < columns2; j++)
                {
                    matrixr[i][j] = 0;
                    //Realizando la multiplicacion de las matrices
                    for (int k = 0; k < columns1; k++)
                        matrixr[i][j] += matrixa[i][k] * matrixb[k][j];
                }
                //Mostrando la respuesta de la multiplicacion de las matrices
            cout << "La multiplicacion de las matrices es:\n";
            for (int i = 0; i < rows1; i++)
            {
                for (int j = 0; j < columns2; j++)
                    cout << matrixr[i][j] << "\t";
                cout << endl;
            }
        }
        break;
     
        //Opcion 4: Buscar numero en la matriz
        case 4:
        {
            //El usuario ingresa las dimensiones de la matriz
            cout << "Cuantas filas desea?: ";
            cin >> rows1;
            cout << "Cuantas columnas desea?: ";
            cin >> columns1;
            int matrixa[rows1][columns1], matrixr[columns1][rows1];

            //El usuario elige si quiere que los numeros se generen aleatoriamente o si los ingresa manualmente
            cout << "Desea generar los numeros aleatoriamente? (s/n): ";
            cin >> select;

            if (select == 's')
            {
                //Generando numeros aleatorios
                srand(time(NULL));
                for (int i = 0; i < rows1; i++)
                    for (int j = 0; j < columns1; j++)
                        matrixa[i][j] = rand() % 10;
            }
            else
            {
                //Ingresando los numeros manualmente
                cout << "Ingrese los numeros de la matriz:" << endl;
                for (int i = 0; i < rows1; i++)
                    for (int j = 0; j < columns1; j++)
                    {
                        cout << "Elemento (" << i + 1 << "," << j + 1 << "): ";
                        cin >> matrixa[i][j];
                    }
            }
            //Mostrando la matriz
            cout << "Matriz:\n";
            for (int i = 0; i < rows1; i++)
            {
                for (int j = 0; j < columns1; j++)
                    cout << matrixa[i][j] << "\t";
                cout << endl;
            }
            //Buscando el numero que el usuario ingreso en la matriz
            int num, count = 0;
            cout << "Ingrese el numero que necesita buscar: ";
            cin >> num;
            for (int i = 0; i < rows1; i++)
                for (int j = 0; j < columns1; j++)
                    if (matrixa[i][j] == num)
                        count++;
            if (count > 0)
            //Verificando si el numero se encontro en la matriz y cuantas veces
                cout << "El numero " << num << " se encontro " << count << " veces en la matriz." << endl;
            else
                cout << "El numero " << num << " no se encontro en la matriz." << endl;
        }
        break;

        //Opcion 5: Contar palabras en cadena
        case 5:

        {
            //Limpiando el buffer de entrada y ingresando la cadena
            cin.ignore();
            string cadena;
            cout << "Ingrese una cadena: ";
            getline(cin, cadena);

            //Contando las palabras utilizadas en la cadena
            int contador = 0;
            bool dentropalabra = false;
            //Recorriendo la cadena caracter por caracter para contar las palabras
            for (int i = 0; i < cadena.length(); i++)
            {
                //contador de palabras
                if (cadena[i] != ' ' && !dentropalabra)
                {
                    contador++;
                    dentropalabra = true;
                }
                //Si se encuentra un espacio, se marca que ya no se esta dentro de una palabra
                else if (cadena[i] == ' ')
                {
                    dentropalabra = false;
                }
            }
            //Mostrando el numero de palabras que tiene la cadena
            cout << "La cadena tiene " << contador << " palabra(s)." << endl;
        }
        break;
        //Opcion 6: Ordenar letras en cadena
        case 6:
        {
            //Funcion para limpiar el buffer de entrada y evitar que se salte lo que ingrese el usuario
            cin.ignore();
            //Ingresando la cadena que se ordenara alfabeticamente
            string cadena;
            cout << "Ingrese una cadena: ";
            getline(cin, cadena);

            //Creacion de la cadena con ordenamiento de burbuja
            for (int i = 0; i < cadena.length() - 1; i++)
            {
                for (int j = i + 1; j < cadena.length(); j++)
                {
                    //Comparando cada letra de la cadena para que sean ordenadas
                    if (cadena[i] > cadena[j])
                    {
                        char temp = cadena[i];
                        cadena[i] = cadena[j];
                        cadena[j] = temp;
                    }
                }
            }
            //Mostrando la cadena ya ordenada alfabeticamente
            cout << "Cadena ordenada: " << cadena << endl;
        }
        break;

        //Opcion 7: Detectar subcadenas
        case 7:
        {
            //funcion para limpiar el buffer de entrada y evitar que se salte lo que ingrese el usuario
            cin.ignore();
            //Ingresando la cadena principal y la subcadena a buscar
            string cadena, subcadena;
            cout << "Ingrese la cadena principal: ";
            getline(cin, cadena);
            cout << "Ingrese la subcadena a buscar: ";
            getline(cin, subcadena);

            //condicion que busca la subcadena dentro de la cadena principal indicando si se encontro o no
            if (cadena.find(subcadena) != string::npos)
            {
                cout << "La subcadena se encontro en la cadena principal." << endl;
            }
            else
            {
                cout << "La subcadena no se encontro en la cadena principal." << endl;
            }
        }
        break;

        //Opcion 8: Verificar palindromo
        case 8:
        {
            //funcion para limpiar el buffer de entrada y evitar que se salte lo que ingrese el usuario
            cin.ignore();
            //Ingresando la cadena que se verificara si es palindromo
            string cadena;
            cout << "Ingrese una cadena: ";
            getline(cin, cadena);

            //Quitando los espacios de la cadena y convirtiendo todas las letras a minusculas
            string limpia = "";
            for (int i = 0; i < cadena.length(); i++)
            {
                char c = cadena[i];
                if (c != ' ')
                {                            
                    if (c >= 'A' && c <= 'Z') 
                        c = c + ('a' - 'A');
                    limpia += c;
                }
            }
            //Verificando si la cadena es palindromo
            bool esPalindromo = true;
            int n = limpia.length();
            for (int i = 0; i < n / 2; i++)
            {
                if (limpia[i] != limpia[n - 1 - i])
                {
                    esPalindromo = false;
                    break;
                }
            }

            //Mostrando si la cadena es palindromo o no
            if (esPalindromo)
                cout << "La cadena ES un palindromo." << endl;
            else
                cout << "La cadena NO es un palindromo." << endl;
        }
        break;
        //En caso de que el usuario ingrese una opcion no valida
        default:
            cout << "Opcion no valida." << endl;
            break;
        }
        //Se pregunta si desea realizar otra operacion
        cout << "Desea realizar otra operacion? (s/n): ";
        cin >> out;
        //Si el usuario ingresa 's' se repite el menu, si ingresa 'n' se termina el programa
    } while (out == 's');
    return 0;
    //Fin del programa
}