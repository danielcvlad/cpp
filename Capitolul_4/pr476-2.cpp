/*
 * afisarea celui mai mare nr citit - do while
 */

#include <iostream>
#include <climits>

int main() {

    int i = 1, max, n, nr;
    
    std::cout << " n = ";
    std::cin >> n;
    max = INT_MIN;
    
    do {
        std::cout << "nr = ";
        std::cin >> nr;
        i++;
        if (nr > max)
            max = nr;
        
    } while (i <= n);

    std::cout << "Maximul este " << max;
    std::cout << std::endl;
    
    return 0;
}
