#include <iostream>
using namespace std;
#define arE 20

void arrayF (int tam, int *array);
void busquedaSec(int numB, int tam, const int *array);
void busquedaBin (int numBB, int tam, int array[arE]);
void busquedaBinD (int numBBB, int tamanio, const int *array_1);
int main() {
    int opc;
    char opn;

    do {

        cout << "\t B U S Q U E D A S ." << endl;
        cout << "1. Busqueda Secuencial. " << endl;
        cout << "2. Busqueda Binaria. (Estatica)" << endl;
        cout << "3. Busqueda Binaria. (Dinamica)" << endl;
        cout << "0. Salir. " << endl;
        cout << "\nSeleccione opcion deseada: " << endl;
        cin >> opc;
        system("cls");
        switch (opc) {
            case 1: {
                int *array, tamanioA, numB;
                cout << "Cuantos numero enteros desea ingresar: " << endl;
                cin >> tamanioA;

                array = new int [tamanioA];

                arrayF(tamanioA, array);

                cout << "Ingrese un numero que desee encontrar en la lista de No. enteros. " << endl;
                cin >> numB;
                busquedaSec(numB, tamanioA, array);

                delete[] array;
                break;
            }
            case 2: {
                int array [arE], numBB;

                cout << "El tamanio del arreglo es " << arE << "." << endl;
                cout << "Ingrese numero de forma ascendente (1,2,3,4...) " << endl;
                for (int i = 0; i < arE; i++) {
                    cout << "Ingrese dato No. " << i + 1 << ":" << endl;
                    cin >> array[i];
                }

                cout << "Diguite numero a buscar: " << endl;
                cin >> numBB;
                busquedaBin(numBB, arE, array);
                break;
            }
            case 3:{
                int *array_1, tamanioA_1 = 0;
                int numBB, aux;

                cout << "Cuantos digitos enteros desea ingresar: " << endl;
                cin >> tamanioA_1;

                array_1 = new int [tamanioA_1];
                arrayF(tamanioA_1, array_1);

                // Ordenamiento forma ascendente //
                for (int i = 1; i < tamanio; i++) {
                    for (int j = 0; j < tamanio - i; j++) {
                        if (arreglo[j] > arreglo[j + 1]) {
                            aux = arreglo[j];
                            arreglo[j] = arreglo[j + 1];
                            arreglo[j + 1] = aux;
                        }
                    }
                }

                cout << "Ascendente." << endl;
                for (int i = 0; i < tamanioA_1; i++) {
                    cout << array_1[i] << endl;
                }

                cout << "Ingrese numero que desea buscar: " << endl;
                cin >> numBB;
                busquedaBinD(numBB, tamanioA_1, array_1);
                delete [] array_1;
                break;
            }
            default:
                break;
        }
        cout << "Desea ejecutar otra accion: 's'(si)/'n'(no)." << endl;
        cin >> opn;
    } while (opn == 's' || opn == 'S');
    return 0;
}

void arrayF (int tam, int *array) {
    for (int i = 0; i < tam; i++){
        cout << "Ingrese dato No. " << i + 1 << " : " << endl;
        cin >> array[i];
    }
}

void busquedaSec(int numB, int tam, const int *array) {
    int i = 0;
    while (i < tam && array[i] != numB) {
        i++;
    }
    if (i > tam - 1) {
        cout << "El numero ingresado '" << numB << "' no se encuentra en el arreglo. " << endl;
    } else {
        cout << "El numero '" << numB << "' esta en la posicion [" << i << "]. " << endl;
    }
}

void busquedaBin (int numBB, int tam, int array[arE]) {
    int inferior = 0, superior = tam - 1;
    int mitad;

    do {
        mitad = (inferior + superior) / 2;
        if (numBB > array[mitad]) {
            inferior = mitad + 1;
        }
        if (numBB < array[mitad]) {
            superior = mitad - 1;
        }
    } while (numBB != array[mitad] && inferior <= superior);
    if (numBB == array[mitad]) {
        cout << "El valor '" << array[mitad] << "' esta en la posicion [" << mitad << "]" << endl;
    } else {
        cout << "El valor " << numBB << "no se encuentra en la lista." << endl;
    }
}

void busquedaBinD (int numBBB, int tamanio, const int *array_1) {
    int inferior = 0, superior = tamanio - 1;
    int mitad;

    do {
        mitad = (inferior + superior) / 2;
        if (numBBB > array_1[mitad]) {
            inferior = mitad + 1;
        }
        if (numBBB < array_1[mitad]) {
            superior = mitad - 1;
        }
    } while (numBBB != array_1[mitad] && inferior <= superior);
    if (numBBB == array_1[mitad]) {
        cout << "El valor '" << numBBB << "' esta en la posicion [" << mitad << "]" << endl;
    } else {
        cout << "El valor " << numBBB << " no se encuentra en la lista." << endl;
    }
}