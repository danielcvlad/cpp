/*
 * calculeaza valoarea functiei f pentru un x citit -> X< 5; 5 <= x <=25; x > 25
 */

# include <iostream>

int main() {
    
    float x;
    
    std::cout << " x = " << std::endl;
    std::cin >> x;
    
    if (x < 5) {
        std::cout << (x * x - 3) << std::endl;
    } else if ((x >= 5) && (x <= 25)) {
        std::cout << (x + 1) << std::endl;
    } else {
        std::cout << (x * x - 5 * x + 6) << std::endl;
    }
    
    return 0;
}
