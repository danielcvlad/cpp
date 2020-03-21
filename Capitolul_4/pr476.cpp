/*
 * afisarea celui mai mare numar citit
 */

#include <iostream>

int main () {
    
    int i, max, nr, n;
    std::cout << "n = ";
    std::cin >> n;
    std::cout << " nr = ";
    std::cin >> nr;
    
    max = nr;
    
    for (i = 2; i <= n; i++) {
        std::cout << " nr ";
        std::cin >> nr;
        if (nr > max)
            max = nr;
    }
    std::cout << " maximul este " << max;
    std::cout << std::endl;
    
    return 0;
}
