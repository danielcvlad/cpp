#include <iostream>

int main () {
    
    int v[10][10], lenColRow, sumRow = 0, sumCol = 0;
    int sum = 0;
    
    std::cout << " Numarul de linii/coloane ale matricei = ";
    std::cin >> lenColRow;
    
    for (int i = 0; i < lenColRow; i++) {
        for (int j = 0; j < lenColRow; j++) {
            std::cout << " v [ " << i << " ] [ " << j << " ] = ";
            std::cin >> v[i][j];
        }
    }
    
    std::cout << " Matricea V = " << std::endl;
    for (int i = 0; i < lenColRow; i++) {
        for (int j = 0; j < lenColRow; j++) {
            std::cout << v[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    std::cout << " Diagonala principala = " << std::endl;
    for (int i = 0; i < lenColRow; i++) {
        for (int j = 0; j < lenColRow; j++) {
            if (i == j) {
                std::cout << v[i][j] << " ";
                sum += v[i][j];
            }
        }
    }
    std::cout << std::endl;
    std::cout << " Suma diagonalei principale " << sum << std::endl;
    for (int i = 0; i < lenColRow; i++) {
        std::cout << v[i][i] << " ";
        sumRow += v[i][i];
    }
    std::cout << std::endl;
    
    sum = 0;
    
    std::cout << " Diagonala secundara = " << std::endl;
    for (int i = 0; i < lenColRow; i++) {
        for ( int j = 0; j < lenColRow; j++) {
            if ((i + j) == lenColRow - 1) {
                std::cout << v[i][j] << " ";
                sum += v[i][j];
            }
        }
    }
    std::cout << std::endl;
    
    for (int i = 0; i < lenColRow; i++) {
        std::cout << v[i][lenColRow - i - 1] << " ";
        sumCol += v[i][lenColRow - i - 1];
    }
    std::cout << std::endl;
    
    std::cout << " Suma diagonalei principale = " << sumRow << std::endl;
    std::cout << " Suma diagonalei secundare = " << sumCol << std::endl;
    
    return 0;
}
