/*
 * n numere reale - afiseaza valoarea minima citita
 */

#include <iostream>

int main () {
    
    int i;
    float n, nr, min; // float - 3,14
    
    std::cout << " n = " << std::endl; // cate numere vrem sa introducem
    std::cin >> n;
    std::cout << " nr = " << std::endl; // numerele introduse
    std::cin >> nr;
    
    min = nr;   // min ia valoarea lui nr
    
    for (i = 0; i < (n-1); i++) {   // bucla - introducem n numere
        std::cout << " nr = " << std::endl;
        std::cin >> nr;
        if(nr < min) {  // conditie - daca nr < valoarea minima initiala
            min = nr;   // min ia valoarea lui nr
        }
    }
    
    std::cout << "Valoarea minima este " << min << std::endl;
    return 0;
}
