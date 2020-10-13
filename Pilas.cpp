#include <stdlib.h>
#include <iostream>

struct jugador_e{
    char nombre[25];
    int numero;
    int equipo;
    struct jugador_e *enlace;
};

jugador_e *p = nullptr, *q = nullptr;
bool otra_caja();
jugador_e *hacer_caja();
void push(jugador_e *q);
jugador_e *pop();
void impresionS (jugador_e *q, jugador_e *p);
void *busqueda (int n);

using namespace std;
int main (){
    int n_jug;
    while (otra_caja()){
        push(hacer_caja());
    }
    q = p;
    impresionS(q,p);

    cout << endl;
    cout << "Ingrese numero de jugador que desea buscar: " << endl;
    cin >> n_jug;
    cout << "El jugador es: " << busqueda(n_jug) << endl;

    while (nullptr != (q = pop())) {
        delete q;
    }
    return 0;
}

bool otra_caja(){
    char opc;
    cout << "Desea ingresar una nueva estructura: (Presione 's' (si), 0 (no))." << endl;
    cin >> opc;
    return opc == 's' || opc == 'S';
}

jugador_e *hacer_caja(){
    jugador_e *q_1 = nullptr;
    q_1 = new jugador_e;
    if ( q_1 == nullptr)
        return nullptr;
    cout << "Nombre del jugador: " << endl;
    cin >> q_1->nombre;
    cout << "Numero del jugador: " << endl;
    cin >> q_1->numero;
    cout << "Equipo: " << endl;
    cin >> q_1->equipo;
    return q_1;
}

void push (jugador_e *q){
    if (q == nullptr)
        return;;
    q->enlace = p;
    p = q;
}

jugador_e *pop(){
    jugador_e *q_2;
    q_2 = p;
    if (p != nullptr)
        p = p->enlace;
    return  q_2;
}

void impresionS(jugador_e *q, jugador_e *p){
    int i = 0;
    q = p;
    do{
        cout << endl;
        cout << "\tEstructura Jugador " << i+1 << "." << endl;
        cout << "Nombre: " << q->nombre << endl;
        cout << "Numero: " << q->numero << endl;
        cout << "Equipo: " << q->equipo << endl;
        q = q->enlace;
        i++;
    }while ( q!= nullptr);
}

void *busqueda(int n){
    int i = 0;
    q = p;
    while (q != nullptr){
        if (q->numero == n){
            return q->nombre;
        }
        q = q->enlace;
        i++;
    };
    return nullptr;
}