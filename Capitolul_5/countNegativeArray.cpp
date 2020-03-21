#include <iostream>

int main () {
    
    int a[10], n, negative = 0;
    
    std::cout << " Introduceti nr de elemente ale vectorului A = ";
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        std::cout << " a[ " << i << " ] = ";
        std::cin >> a[i];
    }
    
    for (int i = 0; i < n; i++) {
        if (a[i] < 0)
            negative++;
    }
    
    std::cout << " Vectorul contine " << negative << " numere negative" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }
    std::cout<< std:: endl;
    
    return 0;
}
