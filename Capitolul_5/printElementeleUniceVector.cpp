#include <iostream>

int main () {
    
    int v[10], n, count = 0, freq[10];
    
    std::cout << "Lungimea vectorului = ";
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        std::cout << " v[ " << i << " ] = " ;
        std::cin >> v[i];
    }
    
    //
    for (int i = 0; i < n; i++)
        freq[i] = -1;
    
    for (int i = 0; i < n; i++) {
        count = 1;
        for(int j = i + 1; j < n; j++) {
            if (v[i] == v[j]) {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0)
            freq[i] = count;
    }
    
    std::cout << " Vectorul V este = " << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
    int unic = 0;
    for (int i = 0; i < n; i++) {
        if (freq[i] == 1) {
            std::cout << " Elementul " << v[i] << " este unic " << std::endl;
            unic = 1;
        }
    }
    if (unic == 0)
        std::cout << "Nu exista elemente unice in vector" << std::endl;
    
    
    return 0;
}
