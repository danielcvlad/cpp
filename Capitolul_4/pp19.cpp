/*
 * se citesc pe rand cifrele unui numar (incepand cu cifra cea mai semnificativa)
 * sa se reconstituie numarul intr o variabila de tip integer
 */

#include <iostream>
#include <cmath>

void buildNo() {
    
    int n, digit, number = 0, putere;
    
    std::cout<< " Introduceti cate cifre vreti sa aibe numarul = " << std::endl;
    std::cin >> n;
    
    putere = pow(10, n-1);
    
    for ( int i = 1; i <= n; i++) {
        std::cout<< " Introduceti o cifra = " << std::endl;
        std::cin>> digit;
        number += digit * putere;
        putere /= 10;
    }
    
    std::cout<< " Numarul este = " << number << std::endl;
    
}

int main () {
    
    buildNo();
    
    return 0;
}
