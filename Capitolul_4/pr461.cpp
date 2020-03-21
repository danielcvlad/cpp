/*
 * suma primelor n numere naturale. n>=1
 */

#include <iostream>

int main () {
    int n, s = 0, i = 1;
    
    std::cout << "n = ";
    std::cin >> n;
    
    do {
        s = s + i;
        i = i + 1;
    } while ( i <= n );
    std::cout << s << std::endl;
    
    std::cout << (n * (n + 1) / 2) << std::endl;
    
    return 0;
}
