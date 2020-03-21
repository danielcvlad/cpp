/*
 *  calculeaza media aritmetica a nr dintr-un sir
 */

#include <iostream>

int main() {
    
    int n, sum = 0, nr = 0;
    
    std::cout << " n = " << std::endl;
    std::cin >> n;
    
    if(n == 0) {
        std::cout << " Introduceti minim un numar diferit de 0, ";
        std::cout << " terminati secventa cu 0 " << std::endl;
        return 1;
    }

    //std::cout << " nr = " << nr << std::endl; debug
    //std::cout << " sum = " << sum << std::endl;
    
    while (n != 0) {
        sum = sum + n;
        nr ++;
        std::cout << " n = " << std::endl;
        std::cin >> n;
        //std::cout << " while sum = " << sum << " nr = " << nr << std::endl; debug
        
    }
    
    std::cout << " Media aritmetica a numerelor este " << (sum/nr) << std::endl;
    return 0;
}
