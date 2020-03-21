/*
 * reuniunea multimii A si B = C
 * C va retine diferenta dintre A si B
 * pentru a afisa reuniunea dintre A si B, afisam vectorul B si A-B (vectorul C)
 */


# include <iostream>

int main () {
    
    int a[10], b[10], c[10], lenA, lenB, gasit, k = 0;
    
    std::cout << " Introduceti nr de elemente pentru A = ";
    std::cin >> lenA;
    
    for (int i = 0; i < lenA; i++) {
        std::cout << " a[ " << i << " ] = ";
        std::cin >> a[i];
    }
    
    std::cout << " Introduceti nr de elemente pentru B = ";
    std::cin >> lenB;
    
    for (int i = 0; i < lenB; i++) {
        std::cout << " b[ " << i << " ] = ";
        std::cin >> b[i];
    }
    
    for (int i = 0; i < lenA; i++) {
        gasit = 0;
        for (int j = 0; j < lenB && !gasit; j++) {
            if ( a[i] == b[j]) {
                gasit = 1;
            }
        }
        if (gasit == 0) {
            c[k] = a[i];
            k++;
        }
    }
    
    for (int i = 0; i < lenB; i++) {
        std::cout << b[i] << "  ";
    }
    for (int i = 0; i < k; i++) {
        std::cout << c[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
