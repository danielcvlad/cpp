/*
 * afisare pozitiv sau negativ
 */

#include <iostream>

int main() {
    
    int n; // numarul dat de utilizator
    std::cout << " n = "; // cerem valoarea lui n
    std::cin >> n; // introducem valoarea lui n
    
    //conditii
    if (n > 0) {
        std::cout << " n este pozitiv" << std::endl;
    } else if (n < 0) {
        std::cout << " n este negativ" << std::endl;
    } else {
        std::cout << " n este 0 " << std::endl;
    }
    
    return 0;
}
