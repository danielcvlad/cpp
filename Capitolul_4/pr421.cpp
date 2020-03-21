/*
 * maximul dintre doua numere
 */

#include <iostream>

int main () {
    
    int a, b, max;
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    
    if (a > b) {
        max = a;
    } else {
        max = b;
    }
    std::cout << " Maximul este " << max << std::endl;
    
    return 0;
}
