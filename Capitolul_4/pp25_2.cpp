#include <iostream>

int sumSquareDigits (int n) {
    int sum = 0;
    
    while (n) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
     // n = 0
    //comparam n cu sum, comparam cu 0 practic
    // comparand in afara functiei asteia cu numarul nostru
    return sum;
}

void totalNumbers_ver2(int n) {
    for (int i = 1; i <= n; i++) {
        if (sumSquareDigits(i) == i) {
            std::cout << "Suma cifrelor la patrat pt " << i << " este egala cu " << i << std::endl;
        }
    }
}

int main () {
    
    int n;
    std::cout << " n = " << std::endl;
    std::cin >> n;
    
    totalNumbers_ver2(n);
    
    return 0;
}
