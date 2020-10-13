#include <iostream>

using namespace std;
int main() {
    int *array, sizeA;
    int i = 0, nMayor = 0, *z;

    cout << "Tamaño arreglo: " << endl;
    cin >> sizeA;

    array = new int [sizeA];

    while (i < sizeA){
        cout << i + 1 << ". Valores arreglo: " << endl;
        cin >> array[i];
        i++;
    }

    for (i = 0; i < sizeA; i++){
        if (array[i] > nMayor)
            nMayor = array[i];
    }

    *z = nMayor;

    cout << "*z -->" << nMay << endl;
    cout << "&z -->" << &z << endl;
    cout << "z -->" << z << endl;

    delete [] array;
    return 0;
}