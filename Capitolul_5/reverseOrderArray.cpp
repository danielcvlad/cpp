#include <iostream>

int main () {
    
    int a[10], b[10], n;
    
    std::cout << " Introduceti nr de elemente pentru vectorul A = ";
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        std::cout << " a[ " << i << " ] = ";
        std::cin >> a[i];
    }
    
    for (int i = n - 1, j = 0; i >= 0; i--, j++) {
        b[j] = a[i];
        std::cout << b[j] << " ";
    }
    std::cout << std::endl;
    
    
    
    return 0;
}
