#include <iostream>
using namespace std;

struct jugador{
    char nombre[25];
    int numero;
    int equipo;
    jugador *link;
};

void ImprimeLista (struct jugador *q);

int main (){
    struct jugador *p, *q;
    p = NULL, q = NULL;
    char opc ='n';

    do{
        q = new struct jugador;
        cout << "Nombre del jugador: " << endl;
        cin >> q->nombre;
        cout << "Numero del jugador: " << endl;
        cin >> q->numero;
        cout << "Numero del equipo: " << endl;
        cin >> q->equipo;
        cout << "Presione 'S', si desea agregar otro elemento: " << endl;
        cin >> opc;

        q->link = p;
        p = q;
    } while (opc == 's' || opc == 'S');

    ImprimeLista(q);

    q = p;
    while (q != NULL){
        p = q->link;
        delete q;
        q = p;
    }
}

void ImprimeLista (struct jugador *q){
    int i = 1;
    q;
    while (q != nullptr){
        cout << "Estructura " << i << "." << endl;
        cout << "Nombre --> " << q->nombre << endl;
        cout << "Numero --> " << q->numero << endl;
        cout << "Equipo --> " << q->equipo << endl << endl;
        q = q->link;
        i++;
    }
}

