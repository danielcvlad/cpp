/*
 * se citeste un nr natural format din 5 cifre
 * sa se afiseze numarul dupa eliminarea cifrei din mijloc
 */

#include <iostream>

int countDigits (int n) {
    
    int digits = 0;
    
    while (n!= 0) {
        n /=10;
        digits++;
    }
    
    return digits;
}

int number (int n) {
    
    int firstDigits, lastDigits, number;
    
    firstDigits = n / 1000;
    lastDigits = n % 100;
    number = firstDigits * 100 + lastDigits;
    
    return number;
}

int main () {
    
    int n, noOfDigits;
    
    std::cout << " n = " << std::endl;
    std::cin >> n;
    
    noOfDigits = countDigits(n);
    if (noOfDigits != 5) {
        std::cout << " introduceti un numar de 5 cifre" << std::endl;
        return 0;
    }
    /*
     if (countDigits(n) != 5) {
     std::cout << "introduceti un numar de 5 cifre" << std::endl;
     }
     */
    
    
    std::cout << "Numarul este = " << number(n) << std::endl;
    
    return 0;
}
