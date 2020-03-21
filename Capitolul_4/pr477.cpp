/*
 * inversarea cifrelor unui nr natural folosint bucla for
 */

#include <iostream>

int main () {
    
    int n, ninv;
    
    std::cout << " n = ";
    std::cin >> n;
    
    for (ninv = 0; n>0;) {
        ninv = ninv * 10 + n % 10;
        n = n / 10;
    }
    std::cout << ninv;
    std::cout << std::endl;
    
    return 0;
}
