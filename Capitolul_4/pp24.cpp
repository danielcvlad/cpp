/*
 * un nr se numeste perfect daca este egal cu suma divizorilor sai (exclusiv el)
 * 6 = 1 + 2 + 3.
 * Afisati toate numerele perfecte mai mici decat o valoare data
 */

#include <iostream>

// divizorii lui 6: 1 2 3 6, 1 + 2 + 3 = 6 este numar perfect
// divizorii lui 3: 1 3, 1 != 3 nu este numar perfect
// divizorii lui 14: 1 2 7 14, 1 + 2 + 7 = 10 != 14 nu este numar perfect
// divizorii lui 28: 1 2 4 7 14 28, 1 + 2 + 4 + 7 + 14 = 28 este numar perfect

bool isPerfect(int n) {
    int sum = 0;
    bool perfect = false;
    
    for(int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    //std::cout << " n este " << n << " sum = " << sum << std::endl;
    if (sum == n) {
        //std::cout << "n = " << n << std::endl;
        perfect = true;
    }
    return perfect;
}

void checkPerfectNumber (int n) {

    for (int i = 2 ; i <= n; i++) {
        if (isPerfect(i))
            std::cout << i << " este numar perfect" << std::endl;
    }
}
/*
void checkPerfectNumber(int n) {
    
    //std::cout << "N este = " << n << std::endl;
    int sum = 0;
    // verificam pt fiecare i daca este numar perfect
    for (int i = 2; i < n; i++) {
        sum = 0;
        // gasim divizorii lui i si sa ii adunam
        for (int div = 1; div <= i/2; div++) {
            if (i % div == 0) {
                sum += div;
                //std::cout << "Divizorii lui" << i << " sunt : " << div << std::endl;
                //std::cout << "Suma este egala cu " << sum << std::endl;
            }
        }
        // verificam daca suma divizorilor este egala cu i
        if (sum == i)
            std::cout << " Suma divizorilor lui i = " << sum << std::endl;
    }
}
 */

int main () {
    
    int n;
    
    std::cout << " n = " << std::endl;
    std::cin >> n;

    checkPerfectNumber(n);
    
    std::cout << isPerfect(n) << std::endl;
    
    return 0;
}
