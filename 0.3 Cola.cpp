#include <iostream>
using namespace std;

struct alumno {
    char nombre[25];
    char matricula[10];
    float calificacion_final;
    alumno *siguiente;
};

bool otra_estru();
alumno *crear_estru();
void enqueque (alumno *q);
alumno *dequeque ();
void impresion_estru (struct alumno *, struct alumno *);

struct alumno *p, *q, *r;
int main() {
    p = nullptr;
    q = nullptr;
    r = nullptr;

    while (otra_estru()) {
        enqueque(crear_estru());
    }

    impresion_estru(q, p);

    while (nullptr != (q = dequeque())) {
        delete p;
    }
    return 0;
}

bool otra_estru() {
    char opc;
    cout << "Desea ingresar una estructura 's'(si)/'n'(no): " << endl;
    cin >> opc;
    return opc == 's' || opc == 'S';
}

alumno *crear_estru() {
    q = new alumno;
    if (q == nullptr)
        return nullptr;
    cout << "Evaluacion Alumno. " << endl;
    cout << "Nombre: " << endl;
    cin >> q->nombre;
    cout << "Matricula: " << endl;
    cin >> q->matricula;
    cout << "Calificacion final: " << endl;
    cin >> q->calificacion_final;
    return  q;
}

void enqueque (alumno *q) {
    if (q == nullptr)
        return;
    q->siguiente = nullptr;
    if (r == nullptr)
        p = q;
    else
        r->siguiente = q;
    r = q;
}

alumno *dequeque () {
    alumno *ptr;
    if (p == nullptr)
        return nullptr;
    ptr = p;
    q = p->siguiente;
    ptr->siguiente = nullptr;
    if (p == nullptr)
        r = nullptr;
    return q;
}

void impresion_estru (struct alumno *, struct alumno *) {
    int i = 0;
    q = p;
    do {
        cout << endl;
        cout << "\tEvaluacion " << i + 1 << ". " << endl;
        cout << "Nombre: " << q->nombre<< endl;
        cout << "Matricula: " << q->matricula << endl;
        cout << "C. Final: " << q->calificacion_final << endl;

        q = q->siguiente;
        i++;
    } while ( q != nullptr);
}
