/*
 * suma primelor n numere naturale - bucla for
 */

#include <iostream>

int main() {
    int i, n, s=0;
    
    std::cout << " n = ";
    std::cin >> n;
    
    for (i = 1; i <= n; i++) {
        s += i;
    }
    
    std::cout << " suma primelor n numere naturale este " << s;
    std::cout << std:: endl;
    
    return 0;
}
