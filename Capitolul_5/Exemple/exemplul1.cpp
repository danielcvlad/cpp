

#include <iostream>

int main () {
    
    int v[100], n;
    
    std::cout << " n = " << std::endl;
    std::cin>> n;
    
    for (int i = 0; i < n; i++) {
        std::cout << " v[ " << i << " ] = ";
        std::cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        std::cout << "v[ " << i << " ] = " << v[i] << std::endl;
    }
    
    return 0;
}
