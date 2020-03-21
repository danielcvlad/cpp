// METODE DE SORTARE



# include <iostream>

// SELECTION SORT - SELECTAREA MINIM / MAXIM

void selectionSortAsc (int a[], int n) {
    
    int min, aux, pos;
    
    for (int i = 0; i < n; i++) {
        min = a[i];
        pos = i;
        
        for (int j = i + 1; j < n; j++) {
            if (min > a[j]) {
                min = a[j];
                pos = j;
            }
        }
        aux = a[pos];
        a[pos] = a[i];
        a[i] = aux;
    }
    
    std::cout << " Selection Sort Ascending: " << std::endl;
    
    for (int i = 0; i < n; i++) {
        
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    
}

void selectionSortDesc (int a[], int n) {
    
    int max, aux, pos;
    
    for (int i = 0; i < n; i++) {
        max = a[i];
        pos = i;
        
        for (int j = i + 1; j < n; j++) {
            if (max < a[j]) {
                max = a[j];
                pos = j;
            }
        }
        aux = a[pos];
        a[pos] = a[i];
        a[i] = aux;
    }
    
    std::cout << " Selection Sort Descending : " << std::endl;
    
    for (int i = 0; i < n; i++) {
        
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    
}


// BUBBLE SORT - SORTARE PRIN INTERSCHIMBARE


void bubbleSort (int v[], int n) {
    
    int aux, counter = -1;
    
    do {
        counter = 0;
        for (int i = 0; i < n - 1; i++) {
            if (v[i] > v[i + 1]) {
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
                counter++;
            }
        }
    } while (counter != 0);
    
    std::cout << " Bubble Sort : " << std::endl;
    
    for (int i = 0; i < n; i++) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
    
}

// MERGE SORT - INTERCLASARE

void mergeSort (int p[], int lenP, int q[], int lenQ) {
    
    int r[30];
    int i = 0, j = 0, k = 0;
    
    while (i < lenP && j < lenQ) {
        if (p[i] < q[j]) {
            r[k] = p[i];
            k++;
            i++;
        } else {
            r[k] = q[j];
            k++;
            j++;
        }
    }

    while (i < lenP) {
        r[k] = p[i];
        k++;
        i++;
    }
    
    while (j < lenQ) {
        r[k] = q[j];
        k++;
        j++;
    }
    
    std::cout << " Merge Sort : " << std::endl;
    
    for (i = 0; i < k; i++) {
        std::cout << r[i] << " ";
    }
    std::cout << std::endl;
}

int main () {
    
    int a[20], b[20], n, m;
    
    std::cout << " Numarul de elemente al primului vector = ";
    std::cin >> n;
    std::cout << " Numarul de elemente al celui de-al doilea vector = ";
    std::cin >> m;
    
    for (int i = 0; i < n; i++) {
        std::cout << " a[ " << i << " ] = ";
        std::cin >> a[i];
    }
    
    for (int j = 0; j < m; j++) {
        std::cout << " b[ " << j << " ] = ";
        std::cin >> b[j];
    }
    
    
    //selectionSortAsc(a, n);
    //selectionSortDesc(a, n);
    //bubbleSort(a, n);
    mergeSort (a, n, b, m);
    
    return 0;
}
