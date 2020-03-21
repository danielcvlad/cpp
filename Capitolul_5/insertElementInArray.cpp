#include <iostream>

int main () {
    
    int v[10], n;
    int a[5] = {5, 4, 3, 2, 1};
    int b[5] = {1, 2 ,3};
    int c[10];
    int d[10];

    std::cout << " Nr de elemente al vectorului V = ";
    std:: cin >> n;
    
    for (int i = 0; i < n; i++) {
        v[i] = i + 1;
        std::cout << v[i] << " ";
    }
    
    std::cout << std::endl;
    
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    
    b[3] = 4;
    b[4] = 5;
    
    for (int i = 0; i < n; i++) {
        std::cout << b[i] << " ";
    }
    std::cout << std::endl;
    
    for (int i = 0; i < n; i++) {
        c[i] = i * 2 + 2;
        std::cout << c[i] << " ";
    }
    std::cout << std::endl;
    
    for (int i = 0; i < n; i++) {
        d[i] = i * 2 + 1;
        std::cout << d[i] << " ";
    }
    std::cout << std::endl;
    
    
    return 0;
}
