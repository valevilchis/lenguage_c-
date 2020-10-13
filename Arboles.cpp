#include <iostream>
using namespace std;

struct tree_node {
    int date;
    tree_node *left_son;
    tree_node *right_son;
};

bool there_is_a_node (int n);
tree_node *build_tree();
void imprePreOrden (struct tree_node *q);
void imprePostOrden (struct tree_node *q);
void impreEntreOrden (struct tree_node *q);
int valMax (int, int);
int altMax (struct tree_node *p);
void eliminarNodo (struct tree_node *p);

tree_node *p = nullptr;
char opc_o;
int main() {
    int opc;
    p =  build_tree();
    cout << "\t::Impresiones::" << endl;
    cout << "1. Pre-Orden." << endl;
    cout << "2. Post-Orden." << endl;
    cout << "3. Entre-Orden." << endl;
    cout << "4. Nivel del arbol. " << endl;
    cout << "Seleccione opcion a realizar: " << endl;
    cin >> opc;

    switch (opc) {
        case 1: {
            cout << "Valores en Pre-Orden. " << endl;
            imprePreOrden(p);
            break;
        }
        case 2: {
            cout << "Valores en Post-Orden. " << endl;
            imprePostOrden(p);
            break;
        }
        case 3: {
            cout << "Valores en Entre-Orden. " << endl;
            impreEntreOrden(p);
            break;
        }
        case 4: {
            cout << "El nivel del arbol es : " << altMax(p) << endl;
            break;
        }
        default:
            break;
    }
    eliminarNodo(p);
    return 0;
}

bool there_is_a_node (int n) {
    char *lado[2] = {"izquierdo", "derecho"};
    cout << "Desea ingresar valor en nodo " << lado[n] << "\n" <<
            "Presione 's'(si)/'n'(no), cambiara a nodo disntinot. " << endl;
    cin >> opc_o;
    return opc_o == 's' || opc_o == 'S';
}

tree_node *build_tree() {
    tree_node *root;
    root = new tree_node;
    cout << "Dato del nodo: " << endl;
    cin >> root->date;
    root->left_son = nullptr;
    root->right_son = nullptr;
    if (there_is_a_node(0))
        root->left_son = build_tree();
    if (there_is_a_node(1))
        root->right_son = build_tree();
    return root;
}

void imprePreOrden (struct tree_node *q) {
    if (q == nullptr)
        return;
    cout << q->date << endl;
    imprePreOrden(q->left_son);
    imprePreOrden(q->right_son);
}

void imprePostOrden (struct tree_node *q) {
    if (q == nullptr)
        return;
    imprePostOrden(q->left_son);
    imprePostOrden(q->right_son);
    cout << q->date << endl;
}

void impreEntreOrden (struct tree_node *q) {
    if (q == nullptr)
        return;
    impreEntreOrden(q->left_son);
    cout << q->date << endl;
    impreEntreOrden(q->right_son);
}

int valMax (int x, int y) {
    if (x < y)
        return y;
    else
        return x;
}

int altMax (struct tree_node *p) {
    if (p != nullptr) {
        if ((p->right_son == nullptr) && (p->left_son == nullptr))
            return 0;
        else
            return 1 + valMax(altMax(p->left_son),altMax(p->right_son));
    } else {
        return 0;
    }
}

void eliminarNodo (struct tree_node *p) {
    if (p != nullptr) {
        eliminarNodo(p->left_son);
        eliminarNodo(p->right_son);
        delete p;
    }
}
