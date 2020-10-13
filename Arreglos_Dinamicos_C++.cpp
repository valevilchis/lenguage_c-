#include <iostream>
using namespace std;

void leerMatriz (int **matrizA, int n, int m);
void imprimirMatriz (int **matrizA, int n, int m);

int main() {
    int opc;

    do {

        cout << "\t Programa 'Arreglos Dinamicos.' " << endl;
        cout << "1. Programa 1." << endl;
        cout << "2. Programa 1 (Modificado)." << endl;
        cout << "3. Salir. " << endl;
        cout << endl;
        cout << "Seleccione una opcion." << endl;
        cin >> opc;

        switch (opc) {
            case 1: {
                int **matrizA;
                int n, m;

                cout << "Numero de renglones: " << endl;
                cin >> n;
                cout << "Numero de columnas: " << endl;
                cin >> m;

                matrizA = new int *[n];
                for (int i = 0; i < n; i++)
                    matrizA[i] = new int[m];

                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        cout << "Ingrese valor de [" << i << "],[" << j << "]" << endl;
                        cin >> matrizA[i][j];
                    }
                }

                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        cout << "Posicion " << "[" << i << "]" << "," << "[" << j << "] = " << matrizA[i][j] << endl;
                    }
                    cout << endl;
                }

                if (matrizA != NULL) {
                    for (int i = 0; i < n; i++)
                        if (matrizA[i] != NULL)
                            delete[] matrizA[i];
                    delete[] matrizA;
                }
            }
                break;
            case 2: {
                int **matrizA;
                int a, b;

                cout << "Numero de renglones: " << endl;
                cin >> a;
                cout << "Numero de columnas: " << endl;
                cin >> b;

                matrizA = new int *[a];
                for (int i = 0; i < a; i++)
                    matrizA[i] = new int[b];

                leerMatriz(matrizA, a, b);
                imprimirMatriz(matrizA, a, b);

                if (matrizA != NULL) {
                    for (int i = 0; i < a; i++)
                        if (matrizA[i] != NULL)
                            delete[] matrizA[i];
                    delete[] matrizA;
                }
            }
                break;
            default:
                break;
        }
    } while (opc != 3);
    return 0;
}

void leerMatriz(int **matrizA, int n, int m) {
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << "Ingrese valor de [" << i << "],[" << j << "]" << endl;
            cin >> matrizA[i][j];
        }
    }
}

void  imprimirMatriz (int **matrizA, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Posicion " << "[" << i << "]" << "," << "[" << j << "] = " << matrizA[i][j] << endl;
        }
        cout << endl;
    }
}
