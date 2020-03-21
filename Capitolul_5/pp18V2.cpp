// citesc un integer si vreau sa pun cifrele acelui nr intr-un vector
// metoda 3

#include <iostream>
#include <cmath>

int main () {
    
    int v[10], nr, aux, k = 0;
    
    std::cout << " Numarul este = ";
    std::cin >> nr;
    
    aux = nr;
    while (aux != 0) {
        k++;
        aux /= 10;
    }
    
    int putere = pow(10, k - 1);
    int len = 0;
    while (nr != 0) {
        v[len] = nr / putere;
        nr %= putere;
        putere /= 10;
        len++;
    }
    
    std::cout << " V = ";
    for (int i = 0; i < len; i++)
        std::cout << v[i] << " ";
    std::cout<< std::endl;
    
    
    return 0;
}
