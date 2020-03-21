/*
 * 3 numere naturale, suma dintre primul si al doilea, suma celor 3
 */

#include <iostream>

int main() {
    
    int s = 0, nr;
    
    std::cout << "Introduceti numarul ";
    std::cin >> nr;
    
    s += nr;
    std::cout << s << std::endl;
    
    std::cout << "Introduceti numarul ";
    std::cin >> nr;
    
    s += nr;
    std::cout << s << std::endl;
    
    std::cout << "Introduceti numarul ";
    std::cin >> nr;
    
    s += nr;
    std::cout << s << std::endl;
    
    return 0;
}
