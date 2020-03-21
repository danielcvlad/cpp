#include <iostream>

int main () {
    
    int a[10][10], nrRow, nrCol, x, y, aux;
    
    std::cout<< " Introduceti nr de randuri: ";
    std::cin >> nrRow;
    std::cout << " Introduceti numarul de coloane: ";
    std::cin >> nrCol;
    
    for(int i = 0; i < nrRow; i++) {
        for(int j = 0; j < nrCol; j++){
            std::cout << " a[ " << i << " ] [ " << j << " ] = ";
            std::cin >> a[i][j];
        }
    }
    
    std::cout << " Introduceti prima linie pe care vreti sa o schimbati ";
    std::cin >> x;
    if (x < 1 || x > nrRow) {
        std::cout << " Introduceti un numar cuprins intre 1 si numarul de randuri!";
        std::cout << std::endl;
        return -1;
    }
    
    std::cout << " Introduceti a doua linie ";
    std::cin >> y;
    if (y < 1 || y > nrRow) {
        std::cout << " Introduceti un numar cuprins intre 1 si numarul de randuri!";
        std::cout << std::endl;
        return -1;
    }
    
    std::cout << " Matricea A = " << std::endl;
    for(int i = 0; i < nrRow; i ++) {
        for (int j = 0; j < nrCol; j ++) {
            std::cout << a[i][j] << " ";
            
        }
        std::cout << std::endl;
    }
    
    for (int i = 0; i < nrCol; i++) {
        // swap a[x-1][i] < - > a[y-1][i]
        aux = a[x - 1][i];
        a[x - 1][i] = a[y - 1][i];
        a[y - 1][i] = aux;
        
    }
    
    std::cout << " Matricea dupa swap de x si y = " << std::endl;
    for(int i = 0; i < nrRow; i ++) {
        for (int j = 0; j < nrCol; j ++) {
            std::cout << a[i][j] << " ";
            
        }
        std::cout << std::endl;
    }
    
    
    return 0;
}
