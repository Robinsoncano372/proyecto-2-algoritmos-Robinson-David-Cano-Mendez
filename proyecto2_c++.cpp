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

            //Esta condicion funciona para verificar si las matrices se pueden sumar
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

            for (int i = 0; i < rows1; i++)
                for (int j = 0; j < columns1; j++)
                    matrixr[i][j] = matrixa[i][j] + matrixb[i][j];

            cout << "La suma de las matrices es:\n";
            for (int i = 0; i < rows1; i++)
            {
                for (int j = 0; j < columns1; j++)
                    cout << matrixr[i][j] << "\t";
                cout << endl;
            }
        }
        break;
        case 2:
        {
            cout << "Cuantas filas desea?: ";
            cin >> rows1;
            cout << "Cuantas columnas desea?: ";
            cin >> columns1;
            int matrixa[rows1][columns1], matrixr[columns1][rows1];

            cout << "Desea generar los numeros aleatoriamente? (s/n): ";
            cin >> select;

            if (select == 's')
            {
                srand(time(NULL));
                for (int i = 0; i < rows1; i++)
                    for (int j = 0; j < columns1; j++)
                        matrixa[i][j] = rand() % 10;
            }
            else
            {
                cout << "Ingrese los numeros de la matriz:" << endl;
                for (int i = 0; i < rows1; i++)
                    for (int j = 0; j < columns1; j++)
                    {
                        cout << "Elemento (" << i + 1 << "," << j + 1 << "): ";
                        cin >> matrixa[i][j];
                    }
            }
            cout << "Matriz normal:\n";
            for (int i = 0; i < rows1; i++)
            {
                for (int j = 0; j < columns1; j++)
                    cout << matrixa[i][j] << "\t";
                cout << endl;
            }

            for (int i = 0; i < rows1; i++)
                for (int j = 0; j < columns1; j++)
                    matrixr[i][j] = matrixa[j][i];
            cout << "La transpuesta de la matriz es:\n";
            for (int i = 0; i < rows1; i++)
            {
                for (int j = 0; j < columns1; j++)
                    cout << matrixr[i][j] << "\t";
                cout << endl;
            }
        }
        break;
        case 3:
        {
            cout << "Cuantas filas desea en la primer matriz?: ";
            cin >> rows1;
            cout << "Cuantas columnas desea?: ";
            cin >> columns1;
            cout << "Cuantas filas desea en la segunda matriz?: ";
            cin >> rows2;
            cout << "Cuantas columnas desea?: ";
            cin >> columns2;
            int matrixa[rows1][columns1], matrixb[rows2][columns2], matrixr[rows1][columns2];

            if (columns1 != rows2)
            {
                cout << "No se pueden multiplicar las matrices" << endl;
                break;
            }
            cout << "Desea generar los numeros aleatoriamente? (s/n): ";
            cin >> select;

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

            for (int i = 0; i < rows1; i++)
                for (int j = 0; j < columns2; j++)
                {
                    matrixr[i][j] = 0;
                    for (int k = 0; k < columns1; k++)
                        matrixr[i][j] += matrixa[i][k] * matrixb[k][j];
                }
            cout << "La multiplicacion de las matrices es:\n";
            for (int i = 0; i < rows1; i++)
            {
                for (int j = 0; j < columns2; j++)
                    cout << matrixr[i][j] << "\t";
                cout << endl;
            }
        }
        break;

        case 4:
        {
            cout << "Cuantas filas desea?: ";
            cin >> rows1;
            cout << "Cuantas columnas desea?: ";
            cin >> columns1;
            int matrixa[rows1][columns1], matrixr[columns1][rows1];

            cout << "Desea generar los numeros aleatoriamente? (s/n): ";
            cin >> select;

            if (select == 's')
            {
                srand(time(NULL));
                for (int i = 0; i < rows1; i++)
                    for (int j = 0; j < columns1; j++)
                        matrixa[i][j] = rand() % 10;
            }
            else
            {
                cout << "Ingrese los numeros de la matriz:" << endl;
                for (int i = 0; i < rows1; i++)
                    for (int j = 0; j < columns1; j++)
                    {
                        cout << "Elemento (" << i + 1 << "," << j + 1 << "): ";
                        cin >> matrixa[i][j];
                    }
            }
            cout << "Matriz:\n";
            for (int i = 0; i < rows1; i++)
            {
                for (int j = 0; j < columns1; j++)
                    cout << matrixa[i][j] << "\t";
                cout << endl;
            }
            int num, count = 0;
            cout << "Ingrese el numero que necesita buscar: ";
            cin >> num;
            for (int i = 0; i < rows1; i++)
                for (int j = 0; j < columns1; j++)
                    if (matrixa[i][j] == num)
                        count++;
            if (count > 0)
                cout << "El numero " << num << " se encontro " << count << " veces en la matriz." << endl;
            else
                cout << "El numero " << num << " no se encontro en la matriz." << endl;
        }
        break;

        case 5:

        {
            cin.ignore();
            string cadena;
            cout << "Ingrese una cadena: ";
            getline(cin, cadena);

            int contador = 0;
            bool dentropalabra = false;

            for (int i = 0; i < cadena.length(); i++)
            {
                if (cadena[i] != ' ' && !dentropalabra)
                {
                    contador++;
                    dentropalabra = true;
                }
                else if (cadena[i] == ' ')
                {
                    dentropalabra = false;
                }
            }

            cout << "La cadena tiene " << contador << " palabra(s)." << endl;
        }
        break;

        case 6:
        {
            cin.ignore();
            string cadena;
            cout << "Ingrese una cadena: ";
            getline(cin, cadena);

            for (int i = 0; i < cadena.length() - 1; i++)
            {
                for (int j = i + 1; j < cadena.length(); j++)
                {
                    if (cadena[i] > cadena[j])
                    {
                        char temp = cadena[i];
                        cadena[i] = cadena[j];
                        cadena[j] = temp;
                    }
                }
            }

            cout << "Cadena ordenada: " << cadena << endl;
        }
        break;

        case 7:
        {
            cin.ignore();
            string cadena, subcadena;
            cout << "Ingrese la cadena principal: ";
            getline(cin, cadena);
            cout << "Ingrese la subcadena a buscar: ";
            getline(cin, subcadena);

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

        case 8:
        {
            cin.ignore();
            string cadena;
            cout << "Ingrese una cadena: ";
            getline(cin, cadena);

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

            if (esPalindromo)
                cout << "La cadena ES un palindromo." << endl;
            else
                cout << "La cadena NO es un palindromo." << endl;
        }
        break;
        default:
            cout << "Opcion no valida." << endl;
            break;
        }
        cout << "Desea realizar otra operacion? (s/n): ";
        cin >> out;
    } while (out == 's');
    return 0;
}