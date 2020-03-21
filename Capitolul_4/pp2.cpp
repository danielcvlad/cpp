/*
 * a,b,c - laturile unui triunghi
 */

#include <iostream>

int main () {
    
    float a, b, c;
    
    std::cout << " a= " << " b= " << "c= " << std::endl;
    std::cin >> a >> b >> c;
    
    if((a + b > c) && (a + c > b) && (b + c > a)) {
        std::cout << "a, b, c pot fi laturile unui triunghi" << std::endl;
    }
    
    return 0;
}
