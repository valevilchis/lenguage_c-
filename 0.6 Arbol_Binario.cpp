#include <iostream>
using namespace std;

struct s_arbol {
    int dato;
    s_arbol *h_izq;
    s_arbol *h_der;
};

bool exis_nodo(int valor);
s_arbol *hacerArbol();
void preOrden (s_arbol *p);
void postOrden (s_arbol *p);
void entreOrden (s_arbol *p);
void eliminArb (s_arbol *p);

int main (){
    int opc;
    struct s_arbol *p;
    p = nullptr;

    cout << "Creacion de nodos del arbol. " << endl;
    cout << "Presione 's'(SI)/'n'(NO). " << endl;
    p = hacerArbol();

        cout << "\t::Impresiones::" << endl;
        cout << "1. Pre-Orden." << endl;
        cout << "2. Post-Orden." << endl;
        cout << "3. Entre-Orden." << endl;
        cout << "4. Destruir Arbol. " << endl;
        cin >> opc;

        switch (opc) {
            case 1: {
                cout << "Valores en Pre-Orden. " << endl;
                preOrden(p);
                break;
            }
            case 2: {
                cout << "Valores en Post-Orden. " << endl;
                postOrden(p);
                break;
            }
            case 3: {
                cout << "Valores en Entre-Orden. " << endl;
                entreOrden(p);
                break;
            }
            case 4: {
                cout << "Eliminacion del arbol. " << endl;
                eliminArb(p);
                break;
            }
            default:
                break;
        }
    return 0;
}

bool exis_nodo(int valor) {
    char opc;
    char *lado[2] = {"izquierdo", "derecho"};
    cout << "Existe nodo: " << lado[valor] << endl;
    cin >> opc;

    return opc == 's' || opc == 'S';
}

s_arbol *hacerArbol() {
    s_arbol *raiz;
    raiz = new s_arbol;
    cout << "Ingrese dato: " << endl;
    cin >> raiz->dato;
    raiz->h_izq = nullptr;
    raiz->h_der = nullptr;

    if (exis_nodo(0))
        raiz->h_izq = hacerArbol();
    if (exis_nodo(1))
        raiz->h_der = hacerArbol();

    return raiz;
}

void preOrden (s_arbol *p) {
    if (p == nullptr)
        return;
    cout << p->dato << endl;
    preOrden(p->h_izq);
    preOrden(p->h_der);
}

void postOrden (s_arbol *p) {
    if (p == nullptr)
        return;
    postOrden(p->h_izq);
    postOrden(p->h_der);
    cout << p->dato << endl;
}

void entreOrden (s_arbol *p) {
    if (p == nullptr)
        return;
    entreOrden(p->h_izq);
    cout << p->dato << endl;
    entreOrden(p->h_der);
}

void eliminArb (s_arbol *p) {
    if (p == nullptr)
        return;
    eliminArb(p->h_izq);
    eliminArb(p->h_der);
    delete p;
}