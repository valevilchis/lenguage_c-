#include <iostream>
#define datos 20

using namespace std;
int main() {
    int arreglo[datos], sizeA;
    int i = 0, nMay = 0, *z;

    cout << "Tamaño arreglo: " << endl;
    cin >> sizeA;

    while (i < sizeA){
        cout << "Ingrese valores arreglo: " << endl;
        cin >> arreglo[i];
        i++;
    }

    for (i = 0; i < sizeA; i++){
        if (arreglo[i] > nMay)
            nMay = arreglo[i];
    }

    *z = nMay;

    cout << "*z -->" << nMay << endl;
    cout << "&z -->" << &z << endl;
    cout << "z -->" << z << endl;

}