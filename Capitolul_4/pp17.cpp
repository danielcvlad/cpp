/*
 * cate cifre are nr n dat
 */

#include <iostream>

int countDigits (int n) {
    
    int count = 0;
    
    while ( n != 0) {
        n = n / 10;
        count++;
    }
    return count;
}

int main () {
    
    int n;
    
    std::cout << " n = " << std:: endl;
    std::cin >> n;
    
    std::cout << "Numarul are " << countDigits(n) << " cifre" << std::endl;
  
    return 0;
}
