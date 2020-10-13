#include <iostream>
using namespace std;

int main() {
    int opc;
    do {

        cout << " \t Programa 'Apuntadores'.." << endl;
        cout << "1. Primer Ejercicio. " << endl;
        cout << "2. Segundo Ejercicio. " << endl;
        cout << "3. Tercer Ejercicio. " << endl;
        cout << "4. Cuarto Ejercicio. " << endl;
        cout << "5. Salir" << endl;

        cout << "Seleccione la opcion que desee.. " << endl;
        cin >> opc;

        switch (opc) {
            case 1:
                double *p1, *p2, *p3;
                double n1, n2, sum;
                cout << "Ingrese el primer numero: " << endl;
                cin >> n1;
                cout << "Ingrese el segundo numero: " << endl;
                cin >> n2;

                p1 = &n1;
                p2 = &n2;
                p3 = &sum;

                *p3 = *p1 + *p2;

                cout << "La suma de los numeros es: " << *p3 << endl;
                break;
            case 2:
                int a;
                int *ptr;
                ptr = &a;
                *ptr = 24;
                cout << "El valor de 'a' es: " << a << endl;
                cout << "El valor de 'ptr' es: " << ptr << endl;
                cout << "El valor de '*ptr' es: " << *ptr << endl;
                cin.get();
                break;
            case 3:
                float *x, *y, *z;
                float m, n;

                x = &m;
                y = &m;
                z = &n;

                *y = 45;
                *z = 10;

                *x = 3 * *y + 2 * *z;

                cout << "El valor de m es: " << m << ", el valor de n es: " << n << endl;
                break;
            case 4: {
                double x = 30, y = 45;
                double *ptr1 = &x, *ptr2 = &y;
                double **ptr3 = &ptr1;

                x = *ptr1 + x;
                *ptr2 = 3 * y + 2 * (**ptr3);
                *ptr3 = &y;
                ptr3 = &ptr2;
                *ptr3 = &x;
                **ptr3 = (-*ptr2) - (*ptr1 * x);
                cout << "El valor de x es: " << x << " , el de y es: " << y << endl;
            }
                break;
                default:
                break;
        }
    } while ( opc != 5);
}