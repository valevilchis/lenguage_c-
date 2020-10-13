#include <iostream>

using namespace std;

float promedio (float calific[]);
float promedio (float calific[], float tamanio);
float suma (float &valor, float &valor1);
float resta (float &valor1, float &valor2);
float multiplicacion (float *valor2, float *valor3);
float division (float *valor2, float *valor4);

int main() {
    int opc;
    char s;

    do {

        cout << "\tPrograma 'Paso por Parametros'." << endl;
        cout << "1. Promedio." << endl;
        cout << "2. Promedio (Calific Asignada)." << endl;
        cout << "3. Calculadora." << endl;
        cout << "4. Salir" << endl;
        cout << endl;
        cout << "Eliga la opcion deseada: " << endl;
        cin >> opc;

        system("cls");

        switch (opc) {
            case 1: {
                float califica[7], resultado;

                cout << "\t Programa obtener promedio. " << endl;
                for (int i = 0; i < 7; i++) {
                    cout << "Ingrese la calificacion " << i + 1 << endl;
                    cin >> califica[i];
                }
                resultado = promedio(califica) / 7;

                cout << "El promedio es: " << resultado << endl;
            }
                break;
            case 2: {
                float alumno1[3] = {9.7, 8.2, 7.0}, res1;
                float alumno2[5] = {5.9, 10.0, 8.5, 9.1, 6.2}, res2;

                cout << "\tPrograma calific[] asignada." << endl;

                for (int i = 0; i < 3; i++)
                    cout << "Las calificaciones 'Alumno 1', son: " << alumno1[i] << endl;

                for (int j = 0; j < 5; j++)
                    cout << "Las calificaciones 'Alumno 2', son: " << alumno2[j] << endl;

                res1 = promedio(alumno1, 3);
                res2 = promedio(alumno2, 5);

                cout << "El promedio 'Alumno 1', es: " << res1 << endl;
                cout << "El promedio 'Alumno 2', es: " << res2 << endl;
            }
                break;
            case 3: {
                int opc1;
                cout << "\t Calculadora basica. " << endl;
                cout << "1. Suma. " << endl;
                cout << "2. Resta. " << endl;
                cout << "3. Multiplicacion. " << endl;
                cout << "4. Division. " << endl;

                cout << "Elige la opcion que desee: " << endl;
                cin >> opc1;

                system("cls");

                switch (opc1) {
                    case 1: {
                        float numero1, numero2, resultado;

                        cout << "Ingrese dos numeros para sumar: " << endl;
                        cin >> numero1 >> numero2;

                        resultado = suma(numero1, numero2);

                        cout << numero1 << " + " << numero2 << " = " << resultado << endl;
                    }
                        break;
                    case 2: {
                        float numero1, numero2, resultado;

                        cout << "Ingrese dos numero para restar: " << endl;
                        cin >> numero1 >> numero2;

                        resultado = resta(numero1, numero2);

                        cout << numero1 << " - " << numero2 << " = " << resultado << endl;
                    }
                        break;
                    case 3: {
                        float numero1, numero2, resultado;

                        cout << "Ingrese dos numeros para multiplicar: " << endl;
                        cin >> numero1 >> numero2;

                        resultado = multiplicacion(&numero1, &numero2);

                        cout << numero1 << " * " << numero2 << " = " << resultado << endl;
                    }
                        break;
                    case 4: {
                        float numero1, numero2, resultado;

                        cout << "Ingrese dos numeros para dividir: " << endl;
                        cin >> numero1 >> numero2;

                        resultado = division(&numero1, &numero2);

                        cout << numero1 << " / " << numero2 << " = " << resultado << endl;
                    }
                        break;
                    default:
                        break;
                }
            }
        }
        cout << "Deseas elegir nuevamente una opcion, presiona s, de lo contrario presiona ENTER." << endl;
        cin >> s;

        system("cls");

    }while (opc != s);
    return 0;
}

float promedio (float calific[]){
    float promedio = 0.0;
    for (int i = 0; i < 7; i++)
        promedio += calific[i];
    return (promedio);
}

float promedio (float calific[], float tamanio) {
    float prom = 0.0;
    for (int i = 0; i < tamanio; i++)
        prom += calific[i];
    return (prom)/tamanio;
}

float suma (float &valor, float &valor1){
    float res_sum;
    res_sum = valor + valor1;
    return res_sum;
}

float resta (float &valor1, float &valor2){
    float res_rest;
    res_rest = valor1 - valor2;
    return res_rest;
}

float multiplicacion (float *valor2, float *valor3){
    float res_mult;
    res_mult = *valor2 * *valor3;
    return res_mult;
}

float division (float *valor3, float *valor4){
    float res_divid;
    res_divid = *valor3 / *valor4;
    return res_divid;
}