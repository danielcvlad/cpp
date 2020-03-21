/*
 * Pentru fiecare element al multimii A se face testul de apartenenta la multimea B
 * iar in caz afirmativ este adaugat la o multime C
 */

#include <iostream>

int main () {
    
    int a[10], b[10], c[10], lenA, lenB, gasit, k = 0;
    
    std::cout << " Numarul de elemente din vectorul A = ";
    std::cin >> lenA;
    
    for (int i = 0; i < lenA; i++) {
        std::cout << " a [ " << i << " ] = ";
        std::cin >> a[i];
    }
    std::cout << " Numarul de elemente din vectorul B = ";
    std::cin >> lenB;
    
    for (int i = 0; i < lenB; i++) {
        std::cout << " b [ " << i << " ] = ";
        std::cin >> b[i];
    }
    
    for (int i = 0; i < lenA; i++) {
        gasit = 0;
        for (int j = 0; j < lenB && !gasit; j++) {
            if (a[i] == b[j]) {
                gasit = 1;
            }
        }
        if (gasit == 1) {
            c[k] = a[i];
            k++;
        }
    }
    
    if (k == 0) {
        std::cout << " Multimea vida " <<std::endl;
    } else {
        for (int i = 0; i < k; i++) {
            std::cout << c[i] << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}
