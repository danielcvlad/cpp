/*
 * switch -
 */

#include <iostream>

int main () {
    
    int i;
    std::cin >> i;
    switch (i) {
        case 1:
            std::cout << "am citit 1" << std::endl;
            break;
        case 2:
            std::cout << "am citit 2" << std::endl;
            break;
        default:
            std::cout << " am citit altceva" << std::endl;
    }
    return 0;
    
}
