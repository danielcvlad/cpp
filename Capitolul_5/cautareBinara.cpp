#include <iostream>

int binarySearch(int v[], int len, int nr) {
    int mid;
    int left = 0;
    int right = len - 1;
    
    while (left <= right) {
        mid = (left + right) / 2;
        
        if (nr == v[mid])
            return mid;
            
        if (nr < v[mid]) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    
    return -1;
}

int main () {
    
    int v[10], n, nr, left_index, right_index, mid, gasit = 0;
    
    std::cout << " Lungimea vectorului = ";
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        std::cout << " v[ " << i << " ] = ";
        std::cin >> v[i];
    }
    
    std::cout << " Numarul cautat = ";
    std::cin >> nr;
    
    left_index = 0;
    right_index = n - 1;
    
    while (left_index <= right_index && !gasit) {
        mid = (left_index + right_index) / 2;
        if (nr == v[mid]) {
            gasit = 1;
        } else if (nr > v[mid]) {
            left_index = mid + 1;
        } else {
            right_index = mid - 1;
        }
    }
    
    if (gasit)
        std::cout << " Numarul cautat este in vector " << std::endl;
    else
        std::cout << " Numarul cautat nu este in vector " << std::endl;
    
    int index = binarySearch(v, n, nr);
    if (index >= 0)
        std::cout << "Am gasit numarul la indexul " << index << "." << std::endl;
    else
        std::cout << "Nu am gasit numarul." << std::endl;
    
    return 0;
}

