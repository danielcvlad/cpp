

#include <iostream>

int main () {
    
    int a[20][20], row, col, b[20][20], c[20][20], sum = 0, prod = 1;
    
    std::cout << " Row = ";
    std::cin >> row;
    std::cout << " Col = ";
    std::cin >> col;
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            std::cout << " a[ " << i << " ] [ " << j << " ] = ";
            std::cin >> a[i][j];
        }
    }
    
    std:: cout << " Matricea A este : " << std::endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            b[i][j] = a[i][j] + 1;
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << " Matricea B este : " << std::endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            std::cout << b[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << " Matricea C este : " << std::endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            c[i][j] = a[i][j] + b[i][j];
            std::cout << c[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    // suma elementelor din matrice
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            sum += a[i][j];
            prod *= a[i][j];
        }
    }
    std::cout << " Suma elementelor din matricea A = " << sum <<std::endl;
    std::cout << " Produsul elementelor din matricea A = " << prod << std::endl;
    
    return 0;
}
