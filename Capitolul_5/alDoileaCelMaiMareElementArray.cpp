#include <iostream>

int main () {
    
    int v[20], n, max = INT_MIN, prev_max = INT_MIN;
    
    std::cout << " Vectorul V = ";
    std::cin >> n;
    
    for(int i = 0; i < n; i++) {
        std::cout << " v[ " << i << " ] = ";
        std::cin >>v[i];
    }
    
    for(int i = 0; i < n; i++) {
        if (max<v[i]) {
            prev_max = max;
            max = v[i];
        } else if (v[i] > prev_max && v[i] != max) {
            prev_max = v[i];
        }
    }
    
    std::cout << " Al doilea cel mai mare element din vector este = " << prev_max;
    std::cout << std::endl;
    
    return 0;
}
