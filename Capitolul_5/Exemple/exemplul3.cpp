#include <iostream>

int main() {
    
    int a[9][9], row, col;
    
    std::cout << " row = " << std::endl;
    std::cin >> row;
    std::cout << " col = " << std::endl;
    std:: cin >> col;
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            std::cout << " a [ " << i << " ] [ " << j << " ] = ";
            std::cin >> a[i][j];
        }
    }
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            //std::cout << " a[ " << i << " ] [ " << j << " ] = " << a[i][j];
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}
