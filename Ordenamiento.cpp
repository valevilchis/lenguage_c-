#include <iostream>
#include "ordenamiento.hpp"
using namespace std;

int main() {
    int opc;
    char opn;

    do {

        cout << "\tO R D E N A M I E N T O. " << endl;
        cout << "1. Ordenamiento por intercambio. " << endl;
        cout << "2. Ordenamiento por seleccion. " << endl;
        cout << "3. Ordenamiento por insercion. " << endl;
        cout << "4. Ordenamiento por burbuja. " << endl;
        cout << "\nSeleccione opcion deseada: " << endl;
        cin >> opc;

        switch (opc) {
            case 1: {
                int *arreglo, tamanioA;

                cout << "Total elementos del arreglo: ?" << endl;
                cin >> tamanioA;

                arreglo = new int [tamanioA];

                pedirDat(arreglo, tamanioA);
                ordenaPorInterc(arreglo, tamanioA);
                delete [] arreglo;
                break;
            }
            case 2: {
                int *arreglo_1, tamanioA_1;

                cout << "Total elementos del arreglo: ?" << endl;
                cin >> tamanioA_1;

                arreglo_1 = new int [tamanioA_1];

                pedirDat(arreglo_1, tamanioA_1);
                ordenaPorSelecc(arreglo_1, tamanioA_1);
                delete [] arreglo_1;
                break;
            }
            case 3: {
                int *arregloA_2, tamanioA_2;

                cout << "Total elementos del arreglo: ?" << endl;
                cin >> tamanioA_2;

                arregloA_2 = new int [tamanioA_2];

                pedirDat(arregloA_2, tamanioA_2);
                ordenaPorInserc(arregloA_2,tamanioA_2);
                delete [] arregloA_2;

                break;
            }
            case 4: {
                int *arregloA_3, tamanioA_3;

                cout << "Total elementos del arreglo: ?" << endl;
                cin >> tamanioA_3;

                arregloA_3 = new int [tamanioA_3];

                pedirDat(arregloA_3, tamanioA_3);
                ordenaPorBurbuj(arregloA_3, tamanioA_3);
                delete [] arregloA_3;
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