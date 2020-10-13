int particion(int *arreglo, int izquierdo, int derecho);
void mezcla(int *arreglo, int m, int media, int derecho_m);

void hacer_arreglo (int *arreglo, int sizeA) {
    for (int i = 0; i < sizeA; i++) {
        std::cout << i + 1 << ". Posicion [" << i << "]: " << std::endl;
        std::cin >> arreglo[i];
    }
}

void quick_sort (int *arreglo, int izquierdo, int derecho) {
    int pivote = particion(arreglo, izquierdo, derecho);
    if (izquierdo > pivote )
        quick_sort(arreglo, izquierdo, pivote);
    if (pivote < derecho)
        quick_sort(arreglo, pivote, derecho);
}


int particion (int *arreglo, int izquierdo, int derecho) {
    int i = izquierdo;
    int j = derecho;
    int aux;
    int pivote = arreglo[(i + j) / 2];
    while (i <= j) {
        while (arreglo[i] < pivote)
            i++;
        while (arreglo[j] > pivote)
            j--;
        if (i <= j) {
            aux = arreglo[i];
            arreglo[i] = arreglo[j];
            arreglo[j] = aux;
            i++;
            j--;
        }
    }
    return i;
}

void merge_sort (int *arreglo, int izquierdo_m, int derecho_m) {
    int media;
    if (izquierdo_m < derecho_m) {
        media = (izquierdo_m + derecho_m) / 2;
        merge_sort(arreglo, izquierdo_m, media);
        merge_sort(arreglo, media + 1, derecho_m);
        mezcla(arreglo, izquierdo_m, media, derecho_m);
    }
}

void mezcla (int *arreglo, int izquierdo_m, int media, int derecho_m) {
    int *aux;
    aux = new int [derecho_m - izquierdo_m + 1];
    int i = izquierdo_m;
    int j = media + 1;
    int k = 0;

    while (i <= media && j <= derecho_m) {
        if (arreglo[i] < arreglo[j]) {
            aux[k] = arreglo[i];
            i++;
        } else {
            aux[k] = arreglo[j];
            j++;
        }
        k++;
    }
    while (i <= media) {
        aux[k] = arreglo[i];
        i++;
        k++;
    }

    while (j <= derecho_m) {
        aux[k] = arreglo[j];
        j++;
        k++;
    }

    for (int l = 0; l < derecho_m - izquierdo_m + 1; ++l) {
        arreglo[izquierdo_m + l] = aux[l];
    }
    delete  [] aux;
}

void impresionA(int *arreglo, int sizeA) {
    for (int i = 0; i < sizeA; i++) {
        std::cout << "Posicion [" << i << "] --> " << arreglo[i] << std::endl;
    }
}