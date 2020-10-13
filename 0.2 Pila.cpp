#include <iostream>
using namespace std;

struct s_jugador {
    int numero;
    float puntuaje;
    char nombre[25];
    s_jugador *siguiente;
};
bool otra_estru();
struct s_jugador *hacer_estr();
void push(struct s_jugador *q);
struct s_jugador *pop();
void impresion_estru(struct s_jugador *, struct s_jugador *);

struct s_jugador *p, *q;
int main() {
    p = nullptr;
    q = nullptr;

    while (otra_estru()) {
        push(hacer_estr());
    }

    q = p;

    impresion_estru(q, p);

    while (nullptr != (q = pop())) {
        delete q;
    }
    return 0;
}

bool otra_estru() {
    char opc;
    cout << "Desea crear estructura: ? presione 's'(si)/'n'(no). " << endl;
    cin >> opc;
    return opc == 's' || opc == 'S';
}

struct s_jugador *hacer_estr() {
    struct s_jugador *q_1;
    q_1 = new s_jugador;

    cout << "Numero del jugador: " << endl;
    cin >> q_1->numero;
    cout << "Puntuaje del jugador: " << endl;
    cin >> q_1->puntuaje;
    cout << "Nombre del jugador: " << endl;
    cin >> q_1->nombre;
    return q_1;
}

void push(struct s_jugador *q) {
    if (q == nullptr) {
        return;
    }
    q->siguiente = p;
    p = q;
}

struct s_jugador *pop() {
    struct s_jugador *q_2;
    q_2 = p;
    if (p != nullptr) {
        p = p->siguiente;
    }
    return q_2;
}

void impresion_estru(struct s_jugador *q, struct s_jugador *p) {
    int j = 0;
    do {
        cout << "\tEquipo " << j + 1 << ". " << endl;
        cout << "El nombre del jugador es: " << q->nombre << endl;
        cout << "El numero es: " << q->numero << endl;
        cout << "El puntuaje es: " << q->puntuaje << endl;
        cout << endl;

        q = q->siguiente;
        j++;
    } while (q != nullptr);

}