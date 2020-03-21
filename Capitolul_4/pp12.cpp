/*
 * se citeste o succesiune de cifre 1 si 0, prima fiind 1
 * aceasta are semnificatia unui nr in baza 2
 * sa se afiseze nr in baza 10
 */


#include <iostream>
#include <cmath>

int main () {
    
    long n;
    int i = 0, digit, result = 0, putere = 0;
    
    std::cout << " n = " << std::endl;
    std::cin >> n;
    
    while (n != 0) {
        digit = n % 10;
        n = n / 10;
        result = result + digit * (1 << i);  //shift - biti
        i++;
    }
/*
    while (n != 0) {
        digit = n % 10;
        n = n / 10;
        result = result + digit * pow(2, putere);
        putere++;
    }
 
    
    int i;
    for (i = 0; n != 0; i++) {
        digit = n % 10;
        n = n / 10;
        result += digit * pow(2, i);
    }
 */
    
    
    std::cout << result << std::endl;
    return 0;
}
