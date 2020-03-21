/*
 * alfabetul in ordine inversa
 */

#include <iostream>

int main() {
    char car;
    for (car = 'z'; car >= 'a'; car--) {
        std::cout << car << " ";
    }
    std::cout << std::endl;
    return 0;
}
