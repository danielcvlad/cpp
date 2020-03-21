/*
 * Produsul cartezian dintre doua multimi
 * afisam a[i] si b[j]
 */

#include <iostream>

int main() {
    
    int a[10], b[10], lengthA, lengthB;
    
    std::cout << " lengthA = ";
    std::cin >> lengthA;
    std::cout << " lengthB = ";
    std::cin >> lengthB;
    
    for(int i = 1; i <= lengthA; i++) {
        for(int j = 1; j <= lengthB; j++) {
            std::cout << i << " " << j << " " << std::endl;
        }
    }
    
    for (int i = 0; i < lengthA; i++) {
        std::cout << " Elementele vectorului A = ";
        std::cin >> a[i];
    }
    for (int j = 0; j < lengthB; j++) {
        std::cout << " Elementele vectorului B = ";
        std::cin >> b[j];
    }
    
    std::cout << std::endl;
    
    for (int i = 0; i < lengthA; i++) {
        for(int j =0; j < lengthB; j++) {
            std::cout << a[i] << " " << b[j] << " " << std::endl;
        }
    }
    
    return 0;
}
