#include <iostream>

bool isInArray(int v[], int len, int nr) {
    int gasit = 0;

    for (int i = 0; i < len; i++) {
        if (nr == v[i]) {
            gasit = 1;
            break;
        }
    }
    
    return gasit;
}

void isInArrayV2() {
    
    int a[10], lenA, nr, found = 0;
    
    std::cout << " Lungimea vectorului a = ";
    std::cin >> lenA;
    
    for (int i = 0; i < lenA; i++) {
        std::cout << "a[ " << i << " ] = ";
        std::cin >> a[i];
    }
    
    std::cout << "Valoarea cautata in a = ";
    std::cin >> nr;
    
    for (int i = 0; i < lenA; i++) {
        if (nr == a[i]) {
            found = 1;
            break;
        }
    }
    if (found) {
        std::cout << " Elementul se afla in vectorul A " << std::endl;
    } else {
        std::cout << " Elementul nu se afla in vectorul A " << std::endl;
    }
}

int main () {
    
    int v[10], n, nr;
    
    std::cout << " Lungimea vectorului = ";
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        std::cout << " v[ " << i << " ] = ";
        std::cin >> v[i];
    }

    std::cout << "Valoarea cautata = ";
    std::cin >> nr;
    
    if (isInArray(v, n, nr))
        std::cout << " Elementul este in vector " << std::endl;
    else
        std::cout << " Elementul nu este in vector" << std::endl;
    
    isInArrayV2();
    
    return 0;
}
