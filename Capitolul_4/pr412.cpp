/*
 * /media aritmetica 
 */

#include <iostream>

int main() {
    int a, b;
    float medie;
    
    std::cout << "a=";
    std::cin >> a;
    std::cout << "b=";
    std::cin >> b;
    
    medie = (float)(a + b) / 2;
    //std::cout << "media este " << medie << std::endl;
    std::cout << "media este " << medie << "\n"; //newline
    
    return 0;
}
