/*
 * 3 nr naturale n, p, k si un sir de n numere naturale.
 * cate dintre acestea impartite la p dau restul k?
 */

#include <iostream>

int main() {
    
    int i, n, p, k, nr, count = 0;
    
    std::cout << " n = " << " p = " << " k = " << std::endl;
    std::cin >> n >> p >> k;
    
    // n = 5, 4 7 10 3 6
    for (i = 0; i < n; i++) {
        std::cout << " nr = " << std::endl;
        std::cin >> nr;
        if (nr % p == k) {
            count++;
        }
    }
    
    std::cout << " Rezultatul este " << count << " numere" << std::endl;
    
    return 0;
}
