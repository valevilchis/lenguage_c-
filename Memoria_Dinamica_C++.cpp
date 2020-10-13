#include <iostream>
using namespace std;

int main() {
    int opc;

    do {

        cout << "\t Memoria dinamica. " << endl;
        cout << "1. Arreglo. " << endl;
        cout << "2. Estructura. " << endl;
        cout << endl;
        cout << "Seleccione una opcion: " << endl;
        cin >> opc;

        system ("cls");

        switch (opc) {
            case 1: {
                double *array;
                int n, i = 0;

                cout << "De que tamaño es el arreglo: " << endl;
                cin >> n;

                array = new double[n];

                while (i < n) {
                    cout << "Introduzca valores para el arreglo: " << endl;
                    cin >> array[i];
                    i++;
                }
                for (i = 0; i < n; i++) {
                    cout << "El valor en la posicion " << i << " es " << array[i] << endl;
                }
                if (array != NULL)
                    delete[]array;
            }
                break;
            case 2: {
                struct s_materia {
                    char nombre[30];
                    float calific;
                };

                s_materia *pointer_struct;
                int tamanio_array;
                int i = 0;

                cout << "De que tamaño es el arreglo: " << endl;
                cin >> tamanio_array;

                pointer_struct = new s_materia[tamanio_array];

                do {
                    cout << "Ingrese nombre de la materia " << i + 1 << ":" << endl;
                    cin >> pointer_struct[i].nombre;
                    cout << "Ingrese calificacion de la materia " << i + 1 << ":" << endl;
                    cin >> pointer_struct[i].calific;
                    i++;
                } while (i < tamanio_array);

                for (i = 0; i < tamanio_array; i++) {
                    cout << "Datos de las materias. " << i + 1 << ":" << endl;
                    cout << "Nombre : " << pointer_struct[i].nombre << endl;
                    cout << "Calificacion: " << pointer_struct[i].calific << endl;
                }
                if (pointer_struct != NULL)
                    delete pointer_struct;
            }
                break;
            default:
                break;
        }
    }while (opc != 2);
}