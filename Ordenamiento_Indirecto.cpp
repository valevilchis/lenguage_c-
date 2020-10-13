#include <iostream>
#include "ordenamiento.hpp"
using namespace std;

int main() {
   int opc;
   char opn;
   do {
       cout << "\tOrdenamiento Indirecto. " << endl;
       cout << "1. Quick Sort. " << endl;
       cout << "2. Mergesort." << endl;
       cout << endl;
       cout << "Eliga la opcion que desea realizar. " << endl;
       cin >> opc;

       switch (opc) {
           case 1: {
               int *array, sizeA;

               cout << "Tamaño del arreglo: " << endl;
               cin >> sizeA;

               array = new int [sizeA];
               cout << endl;
               hacer_arreglo(array, sizeA);

               cout << "\n\tImpresion sin orden. " << endl;
               impresionA(array, sizeA);

               quick_sort(array, 0, sizeA - 1);
               cout << "\n\tImpresion con orden. " << endl;
               impresionA(array, sizeA);
               cout << endl;
               break;
           }
           case 2: {
               int *array, sizeA;

               cout << "Tamaño del arreglo: " << endl;
               cin >> sizeA;

               array = new int [sizeA];
               cout << endl;
               hacer_arreglo(array, sizeA);

               cout << "\n\tImpresion sin orden. " << endl;
               impresionA(array, sizeA);

               merge_sort(array, 0, sizeA - 1);
               cout << "\n\tImpresion con orden. " << endl;
               impresionA(array, sizeA);
               cout << endl;
               break;
           }
           default:
               break;
       }
       cout << "Desea seleccionar una nueva opcion, presione 'S'(si)/'N'(no). " << endl;
       cin >> opn;
   }while (opn == 's' || opn == 'S');
    return 0;
}