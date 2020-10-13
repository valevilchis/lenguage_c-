#include <stdlib.h>
#include <iostream>

struct jugador_e{
    char nombre[25];
    int numero;
    int equipo;
    jugador_e * enlace;
};

jugador_e *p = nullptr, *q = nullptr, *r = nullptr;

bool otra_caja();
jugador_e *hacer_caja();
void enqueque (jugador_e *q);
jugador_e *Dequeque ();
void impresionS (jugador_e *q, jugador_e *p);
void *busqueda (int n);
using namespace std;
int main (){
    int n_jug;
    while (otra_caja()){
        enqueque(hacer_caja());
    }
    impresionS(q,p);

    cout << "Numero del jugador a buscar: " << endl;
    cin >> n_jug;
    cout << "El jugaro es: " << busqueda(n_jug);

    while (nullptr != (q = Dequeque())){
        delete p;
    }
    return 0;
}

bool otra_caja(){
    char opc;
    cout << "Desea ingresar una nueva estructura: " << endl;
    cin >> opc;
    return opc == 's' || opc == 'S';
}

jugador_e *hacer_caja(){
    jugador_e *q = nullptr;
    q = new jugador_e;
    if ( q == nullptr)
        return nullptr;
    cout << "Nombre del jugador: " << endl;
    cin >> q->nombre;
    cout << "Numero del jugador: " << endl;
    cin >> q->numero;
    cout << "Equipo: " << endl;
    cin >> q->equipo;
    return q;
}

void enqueque (jugador_e *q_1){
    if (q_1 == nullptr)
        return;
    q_1->enlace = nullptr;
    if (r == nullptr)
        p = q_1;
    else
        r->enlace = q_1;
    r = q_1;
}

jugador_e *Dequeque (){
    jugador_e *deq;
    if (p == nullptr)
        return nullptr;
    deq = p;
    p = p->enlace;
    deq->enlace = nullptr;
    if (p == nullptr)
        r = nullptr;
    return q;
}

void impresionS (jugador_e *q, jugador_e *p){
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

void *busqueda (int n){
    q = p;
    while (q != nullptr){
        if (q->numero == n){
            return q->nombre;
        }
        q = q->enlace;
    };
    return nullptr;
}