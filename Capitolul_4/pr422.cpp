/*
 * 3 variabile, sa se calculeze dupa caz
 */

#include <iostream>

int main () {
    double a, b, c, e;
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    std::cout << "c = ";
    std::cin >> c;
    
    if (c > 0) {
        e = a + b;
    } else {
        if (!c) {   //if (c == 0) {
            e = a * b;
        } else {
            e = a - b;
        }
    }
    std::cout << e << std::endl;
    
    return 0;
}
