/*
 * S = 1 + 1 * 2 + 1 *2 * 3 + ... + 1 * 2 *...* n;
 */

#include <iostream>

int main () {
    
    int i, s = 0, p = 1, n;
    
    std::cout << " n = ";
    std::cin >> n;
    /*
     n = 3
     
     i = 1 < = 3 DA p = 1 * 1 = 1, s = 0 + 1 = 1 (primul termen)
     i = 2 < = 3 DA p = 1 * 2, s = 1 + 1 * 2
     i = 3 < = 3 DA p =  1 * 2 * 3, s = 1 + 1 * 2 + 1 * 2 * 3
     */
    for (i = 1; i <= n; i++) {
        p *= i;
        s += p;
    }
    std::cout << s;
    std::cout << std::endl;
}
