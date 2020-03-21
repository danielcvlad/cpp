#include <iostream>

int main () {
    
    int v[7] = {10, 20, 10, 4, 50, 10, 20};
    int n = 7, freq[7], count = 0;
    
    for (int i = 0; i < n; i++) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
    
    for(int i = 0; i < n; i++) 
        freq[i] = -1;
    
    
    for (int i = 0; i < n; i++) {
        count = 1;
        for (int j = i + 1; j < n; j++) {
            if (v[i] == v[j]) {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0)
            freq[i] = count;
    }
    
    for (int i = 0; i < n; i++) {
        if (freq[i] != 0) {
            std::cout << " Elementul " << v[i] << " apare de " << freq[i] << " ori. ";
            std::cout << std::endl;
        }
    }
    return 0;
}
