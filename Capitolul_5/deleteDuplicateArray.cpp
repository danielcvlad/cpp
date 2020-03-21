#include <iostream>

int main() {
    
    int v[10], n;
    
    std::cout << " Cate elemente contine vectorul V = ";
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        std::cout << " v[ " << i << " ] = ";
        std::cin >> v[i];
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i] == v[j]) {
                for (int k = j; k < n; k++){
                    v[k] = v[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
