#include <iostream>

using namespace std;
int main() {
    int n, i = 0, opc;
    int tamanio = n * 2;
    double *G, *Q;

    do{
        cout << "1. Alojamiento G: " << endl;
        cout << "2. Alojamiento Q: " << endl;
        cout << "0. Salir. " << endl;
        cout << "Seleccione opcion: " << endl;
        cin >> opc;

        switch (opc){
            case 1:{
                cout << "Tamaño arreglo G: " << endl;
                cin >> n;

                G = new double [n];

                while (i < n){
                    cout << "Valores G: " << endl;
                    cin >> G[i];
                    i++;
                }
                for (i = 0; i < n; i++){
                    cout << "Valores G: " << G[i]*4 << endl;
                }
                delete [] G;
                break;
            }
            case 2:{
                cout << "Tamaño arreglo Q: " << endl;
                cin >> tamanio;

                Q = new double [tamanio];

                while (tamanio > i){
                    cout << "Valores Q: " << endl;
                    cin >> Q[i];
                }
                for ( i = 0; i < tamanio; i++){
                    cout << "Valores Q: " << Q[i]+3 << endl;
                }
                delete [] Q;
                break;
            }
            default:
                break;
        }
    } while (opc != 0);
    return 0;
}