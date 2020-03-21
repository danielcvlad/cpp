#include <iostream>

int main () {
    
    float a[50], b[50], c[50];
    int n, i, j;
    
    std::cout << " Introduceti nr de componente = " << std::endl;
    std::cin >> n;
    
    for (i = 0; i < n; i++) {
        std::cout << " a[ " << i << " ] = ";
        std::cin >> a[i];
    }
    std::cout << std::endl;
    for (i = 0; i < n; i++) {
        b[i] = a[i];
        std::cout << " b[ " << i << " ] = " << b[i] << std::endl;
    }
    std::cout << std::endl;
    for (i = n - 1, j = 0; i >= 0; i--, j++) {
        c[j] = a[i];
        std::cout << " c[ " << j << " ] = " << c[j] << std::endl;
    }
    
    return 0;
}
