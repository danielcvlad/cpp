#include<iostream>

int main () {
    
    int a[10][10], lenColRow, aux;
    
    std::cout << " Numarul de linii/coloane ale matricei = ";
    std::cin >> lenColRow;
    
    for (int i = 0; i < lenColRow; i++) {
        for (int j = 0; j < lenColRow; j++) {
            std::cout << " v [ " << i << " ] [ " << j << " ] = ";
            std::cin >> a[i][j];
        }
    }
    
    std::cout << " Matricea A = " << std::endl;
    for (int i = 0; i < lenColRow; i++) {
        for (int j = 0; j < lenColRow; j++) {
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    for (int i = 0; i < lenColRow; i++) {
        // interschimb a[i][i] cu a[i][n-1-i];
        aux = a[i][i];
        a[i][i] = a[i][lenColRow - 1 - i];
        a[i][lenColRow - 1 - i] = aux;
    }
    
    std::cout << " Matricea A dupa interschimbarea diagonalelor: " << std::endl;
    for (int i = 0; i < lenColRow; i++) {
        for (int j = 0; j < lenColRow; j++) {
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    //pentru diagonala principala si diagonala secundara (2)
    int sumAbove = 0, sumBelow = 0, sumAbove2 = 0, sumBelow2 = 0;
    
    for(int i = 0; i < lenColRow; i++) {
        for (int j = 0; j < lenColRow; j++) {
            if (i < j) {
                sumAbove += a[i][j];
            } else if (i > j) {
                sumBelow += a[i][j];
            }
            if (i + j < lenColRow - 1) {
                sumAbove2 += a[i][j];
            } else if (i + j > lenColRow - 1) {
                sumBelow2 += a[i][j];
            }
        }
    }
   
    
    std::cout << " Suma elementelor de deasupra diagonalei principale " << sumAbove << std::endl;
    std::cout << " Suma elementelor de sub diagonala principala " << sumBelow << std::endl;
    std::cout << " Suma elementelor de deasupra diagonalei secundare " << sumAbove2 << std::endl;
    std::cout << " Suma elementelor de sub diagonala secundara " << sumBelow2 << std::endl;
    
    return 0;
}
