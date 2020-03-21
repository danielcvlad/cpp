/*
 * se citesc 2 numere de
 *
 */

#include <iostream>

void compareDigits () {
    
    int n, k, digit1, digit2, digitCount = 0;
    
    std::cout << " n = " << std::endl;
    std::cin >> n;
    std::cout << " k = " << std::endl;
    std::cin >> k;
    
    
    while (n != 0) {
        digit1 = n % 10;

        int help = k;
        
        while (help != 0) {
            digit2 = help % 10;
            
            if (digit1 == digit2) {
                digitCount++;
            }
            
            help = help / 10;
        }
        
        n = n / 10;
    }
    
    std::cout << " Cele doua numere au " << digitCount << " numere comune " << std::endl;
    
}

int main () {
    
    compareDigits();
    return 0;
}
