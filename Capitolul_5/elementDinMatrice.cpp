#include <iostream>

int main () {
    
    int a[20][20], row, col, nr, gasit;
    
    std::cout << " Row = "; // citesc nr de randuri
    std::cin >> row;
    std::cout << " Col = "; // citesc nr de coloane
    std::cin >> col;
    
    std::cout << " Numarul cautat este = "; // citesc numarul pe care il caut
    std::cin >> nr;
    
    for (int i = 0; i < row; i++) {     // citesc elementele din matrice
        for (int j = 0; j < col; j++) {
            std::cout << " a[ " << i << " ] [ " << j << " ] = ";
            std::cin >> a[i][j];
        }
    }
    
    gasit = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (nr == a[i][j]) {
                gasit = 1;
                break;
            }
        }
        if (gasit == 1)
            break;
    }
    
    if (gasit)
        std::cout << " Numarul cautat se gaseste in Matrice" << std::endl;
    else
        std::cout << " Numarul cautat NU se gaseste in Matrice" << std::endl;
    
    return 0;
}
