#include <iostream>
using namespace std;

struct jugador{
    char nombre[25];
    int numero;
    int equipo;
    jugador *siguiente;
    jugador *anterior;
};

void imprimeLista (struct jugador *q);

int main() {
    struct jugador *p, *q;
    char opc = 'n';
    p = nullptr;
    q = nullptr;

    do{
        q = new struct jugador;
        cout << "Nombre del jugador: " << endl;
        cin >> q->nombre;
        cout << "Numero del jugador: " << endl;
        cin >> q->numero;
        cout << "Equipo del jugador: " << endl;
        cin >> q->equipo;

        q->siguiente = p;
        q->anterior = nullptr;
        if(p != nullptr){
            p->anterior = q;
        }
        p = q;

        cout << "Desea agregar una nueva estructura: ? (Presione 's') " << endl;
        cin >> opc;
    }while (opc == 's' || opc == 'S');

    q = p;

    imprimeLista(q);

    delete p;
    p = q;
}

void imprimeLista (struct jugador *q){
    int i = 1;
    while (q != nullptr){
        cout << "Estructura: " << i << endl;
        cout << "Nombre: " << q->nombre << endl;
        cout << "Numero jugador: " << q->numero << endl;
        cout << "Equipo jugador: " << q->equipo << endl;
        q = q->siguiente;
        i++;
    }
}