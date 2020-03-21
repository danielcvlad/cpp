#include <iostream>

int main () {
    
    int nr, ninv;
    
    std:: cout << "Introduceti numarul: ";
    std:: cin >> nr;
    
    while (nr != 0) {
        ninv = ninv * 10 + nr%10;
        nr = nr/10;
    }
    std::cout << ninv;
    
    return 0;
}
