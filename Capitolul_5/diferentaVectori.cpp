/*
 * avem 2 vectori A si B
 * in vectorul C stocam diferenta A - B (elementele ce sunt in A si nu sunt in B)
 */

# include <iostream>

int main () {
    
    int a[10], b[10], c[10], k = 0, gasit, lenA, lenB;
    
    std::cout << " Introduceti nr de elemente din vectorul A = ";
    std::cin >> lenA;
    
    for (int i = 0; i < lenA; i++) {
        std::cout << " a[ " << i << " ] = ";
        std::cin >> a[i];
    }
    
    std::cout << " Introduceti nr de elemente din vectorul B = ";
    std::cin >> lenB;
    
    for (int i = 0; i < lenB; i++) {
        std::cout << " b[ " << i << " ] = ";
        std::cin >> b[i];
    }
    
    for (int i = 0; i < lenA; i++) {
        gasit = 0;
        for (int j = 0; j < lenB && !gasit; j++) {
            if (a[i] == b[j]) {
                gasit = 1;
            }
            
        }
        if (gasit == 0) {
            c[k] = a[i];
            k++;
        }
    }
    
    for (int i = 0; i < k; i++) {
        std::cout << " c[k] = " << c[i] << std::endl;
    }
    
    return 0;
}
