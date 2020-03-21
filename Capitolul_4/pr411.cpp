/*
 * interschimbarea continutului a doua variabile
 */

#include <iostream>

int main() {
    int a, b, c;
    
    std::cout << "a=";
    std::cin >> a;
    std::cout << "b=";
    std::cin >> b;
    
    c = a;
    a = b;
    b = c;
    
    std::cout << "a=" << a << std::endl;
    std::cout << "b=" << b << std::endl;
 
    return 0;
}
