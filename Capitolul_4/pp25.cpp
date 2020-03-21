/*
 * afisati toate nr naturale mai mici decat o valoare data
 * care sunt egale cu suma patratelor cifrelor lor
 */


#include <iostream>

/* vreau sa citesc un numar natural n
 * vreau sa iau fiecare cifra a numarului n si sa le stochez intr-o variabila
 * vreau sa verific daca suma cifrelor ridicate la patrat = i
 */

bool sumaCifrelorLaPatrat (int n) {
    
    bool sumEqualsN = false;
    
    int sum = 0;
    int help = n;
    
    while (help != 0) {
        int digit = help % 10;
        sum += digit * digit;
        help /= 10;
    }
    if (sum == n) {
        sumEqualsN = true;
        //return true;
    }
    return sumEqualsN;
    //return false;
}

void totalNumbers (int n) {
    
    for (int i = 0; i < n; i++) {
        if (sumaCifrelorLaPatrat(i))
            std::cout << " Suma cifrelor la patrat ale lui i = " << i << std::endl;
    }
}

int main () {
    
    int n;
    
    std::cout << " n = " << std::endl;
    std::cin >> n;
    
    std::cout << "Suma cifrelor la patrat ale lui n este egala cu n " << sumaCifrelorLaPatrat(n) << std::endl;
    
    totalNumbers(n);
    
    return 0;
}
