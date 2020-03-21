#include <iostream>

int main () {
    
    int v[10], n;
    int a[10] = { 22, 10, 5, 17, 4, -3};
    
    std::cout << " Cate elemente contine vectorul V = ";
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        std::cout << " v[ " << i << " ] = ";
        std::cin >> v[i];
    }
    
    std::cout << " Vectorul V = " << std::endl;
    for (int i = 0; i < n; i++)
        std::cout << v[i] << " ";
    
    std::cout << std::endl;
    
    std::cout << " Vectorul A = " << std::endl;
    for (int i = 0; i < 10; i++)
        std::cout << a[i] << " ";
    
    std::cout << std::endl;
    
    
    
    return 0;
}
