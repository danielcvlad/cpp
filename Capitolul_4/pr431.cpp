/*
 * ecuatia de gradul 1 cu o necuoscuta - (ax+b=0)
 */

#include <iostream>

int main() {
    
    float a, b, x;
    
    std::cout << " a= ";
    std::cin >> a;
    std::cout << " b = ";
    std::cin >> b;
    
    if (a) {
        x = -b / a;
        std::cout << x << std::endl;
    } else {
        if (b == 0) {
            std::cout << " Infinitate de solutii" << std::endl;
        } else {
            std::cout << " Nu are solutie" << std::endl;
        }
    }
    return 0;
}
