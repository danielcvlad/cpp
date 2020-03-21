#include <iostream>

int main () {
    
    int a[20][20], row, col, suma;
    std::cout << " Row = "; // citesc nr de randuri
    std::cin >> row;
    std::cout << " Col = "; // citesc nr de coloane
    std::cin >> col;
    
    for (int i = 0; i < row; i++) {     // citesc elementele din matrice
        for (int j = 0; j < col; j++) {
            std::cout << " a[ " << i << " ] [ " << j << " ] = ";
            std::cin >> a[i][j];
        }
    }
    
    for (int i = 0; i < row; i++) { // suma liniilor
        suma = 0;
        for (int j = 0; j < col; j++) {
            suma = suma + a[i][j];
        }
        std::cout << " Suma de pe linia " << i << " este = " << suma << std::endl;
    }
    
    
    for (int j = 0; j < col; j++) { // suma coloanelor
        suma = 0;
        for (int i = 0; i < row; i++) {
            suma = suma + a[i][j];
        }
        std::cout << " Suma de pe coloana " << j << " este = " << suma << std::endl;
    }
    
    return 0;
}
    
