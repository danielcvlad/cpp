// elementele pare la inceput, impare la final
/*
* left > right
* left - primul element din vector impar
* right - ultimul element par din vector
* daca left este mai mare sau egal decat right inseamna ca vectorul este sortat
* elementele pare aflandu-se in partea stanga iar cele impare in dreapta
*/

#include <iostream>

int main () {
    
    int v[10], n, aux, leftIndex, rightIndex;
    
    std::cout << "Elementele vectorului V = ";
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        std::cout << " v[ " << i << " ] = ";
        std::cin >> v[i];
    }
    
    leftIndex = 0;
    rightIndex = n - 1;
    
    while (leftIndex < rightIndex) {
        while (v[leftIndex] % 2 == 0 && leftIndex < rightIndex)
            leftIndex++;
    
        while (v[rightIndex] % 2 != 0 && leftIndex < rightIndex)
            rightIndex--;
        
        if (leftIndex < rightIndex) {
            aux = v[leftIndex];
            v[leftIndex] = v[rightIndex];
            v[rightIndex] = aux;
            leftIndex++;
            rightIndex--;
        }
    }
    
    std::cout << " Vectorul par / impar = " << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << v[i] << "  ";
    }
    std::cout << std::endl;
    
    return 0;
}
