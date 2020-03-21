#include <iostream>

int main () {
    
    int a[10], n, nr, gasit;
    
    std::cout << " Introduceti nr de elemente al vectorului = ";
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        std::cout << " a[ " << i << " ] = ";
        std::cin >> a[i];
    }
    
    std::cout << " nr = ";
    std::cin >> nr;
    
    gasit = 0;
    for (int i = 0; i < n; i++) {
        if (nr == a[i]) {
            gasit = 1;
            break;
        }
    }
    if (gasit)
        std::cout<< " Numarul introdus se afla in vector " << std::endl;
    else
        std::cout<< " Numarul introdus nu se afla in vector" << std::endl;
    
    return 0;
    
}
