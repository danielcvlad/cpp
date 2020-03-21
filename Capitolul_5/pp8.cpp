// suma numerelor pozitive dintr un vector

#include <iostream>

#define MAX_LEN     10

int main () {
    
    int v[MAX_LEN], n, sum = 0;
    
    std::cout << " Introduceti elementele vectorului V = ";
    std::cin >> n;
    
    if (n > MAX_LEN)
        return -1;
    
    for (int i = 0; i < n; i++) {
        std::cout << " v[ " << i << " ] = ";
        std::cin >> v[i];
    }
    
    for (int i = 0; i < n; i++) {
        if (v[i] > 0) {
            sum += v[i];
        }
    }
    
    std::cout << "Suma elementelor pozitive din vector este = " << sum << std::endl;
    
    return 0;
}
