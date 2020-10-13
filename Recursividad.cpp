#include <iostream>

long int factorial (long int);
long int fibonacci (long int);
using namespace std;
int main() {
    int opc;
    char val = 'n';
    do{
        cout << "\tRecursividad. " << endl;
        cout << "1. Factorial. " << endl;
        cout << "2. Serie Fibonacci. " << endl;
        cout << "0. Salir. " << endl;
        cout << "Selecciones opcion que desee: " << endl;
        cin >> opc;
        switch (opc) {
            case 1: {
                int num_f;
                cout << "Ingrese numero entero para obtener factorial: " << endl;
                cin >> num_f;
                cout << "Factorial de " << num_f << "! = " << factorial(num_f) << endl;
                cout << "\tProceso Recursivo. " << endl;
                for (int i = 1; i <= num_f - 1; i++) {
                    cout << "\t" << factorial(i) << " * factorial ( " << i + 1 << " - 1 ) | " << factorial(i + 1) << endl;
                }
                break;
            }
            case 2: {
                int num_fib;
                cout << "\tSerie Fibonacci. " << endl;
                cout << "Cantidad de elementos a mostrar de Serie Fibonacci: " << endl;
                cin >> num_fib;
                for (int i = 1; i <= num_fib; i++) {
                    cout << "Posicion " << i << " de la serie Fibonacci es | " << fibonacci(i) << endl;
                }
                break;
            }
            default:
                cout << "Opcion incorrecta, intente de nuevo. " << endl;
                break;
        }
        cout << "Desea seleccionar otra opcion: " << endl;
        cout << "Presione 's',(si) o 'n', (no). " << endl;
        cin >> val;
        system("cls");
    }while (val == 's' || val == 'S');
    return 0;
}

long int factorial(long int n) {
    if (( n == 0) || (n == 1)) {
        n = 1;
    } else {
        n = n * factorial(n - 1);
    }
    return n;
}

long int fibonacci (long int var) {
    if (var == 0 || var == 1) {
        return var;
    } else {
        return (fibonacci(var - 1) + fibonacci(var -2));
    }
}