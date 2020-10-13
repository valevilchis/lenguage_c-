void pedirDat (int *arreglo, int tamanio) {
    for (int i = 0; i < tamanio; i++) {
        std::cout << "Ingrese datos No. " << i + 1 << ". " << std::endl;
        std::cin >> arreglo[i];
    }
}

void ordenaPorInterc (int *arreglo, int tamanio) {
    int aux;
    for (int i = 1; i < tamanio; i++) {
        for (int j = 0; j < tamanio - i; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                aux = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = aux;
            }
        }
    }

    std::cout << "Orden ascendente. " << std::endl;
    for (int i = 0; i < tamanio; i++) {
        std::cout << arreglo[i] << std::endl;
    }
}


void ordenaPorSelecc (int *arreglo, int tamanio) {
    int menor, aux;
    for (int i = 0; i < tamanio - 1; i++) {
        menor = i;
        for (int j = i + 1; j < tamanio; j++) {
            if (arreglo[menor] > arreglo[j]){
                menor = j;
            }
        }
        aux = arreglo[menor];
        arreglo[menor] = arreglo[i];
        arreglo[i] = aux;
    }

    std::cout << "Orden ascendente. " << std::endl;
    for (int i = 0; i < tamanio; i++) {
        std::cout << arreglo[i] << std::endl;
    }
}
void ordenaPorInserc (int *arreglo, int tamanio) {
    int aux, i, j;
    for (i = 1; i < tamanio; i++) {
        aux = arreglo[i];
        for (j = i - 1; j >= 0 && arreglo[j] > aux; j--)
            arreglo[j + 1] = arreglo[j];
        arreglo[j + 1] = aux;
    }

    std::cout << "Orden ascendente. " << std::endl;
    for (i = 0; i < tamanio; i++) {
        std::cout << arreglo[i] << std::endl;
    }
}

void ordenaPorBurbuj (int *arreglo, int tamanio) {
    int aux;
    for (int i = 0; i < tamanio; i++) {
        for (int j = i + 1; j < tamanio; j++) {
            if (arreglo[j] < arreglo[i]) {
                aux = arreglo[j];
                arreglo[j] = arreglo[i];
                arreglo[i] = arreglo[j];
                arreglo[i] = aux;
            }
        }
    }

    std::cout << "Orden ascendente. " << std::endl;
    for (int i = 0; i < tamanio; i++) {
        std::cout << arreglo[i] << std::endl;
    }
}