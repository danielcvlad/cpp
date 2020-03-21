/*
 * par / impar - afiseaza mesaj
 */

# include <iostream>

int main() {
    
    int nr;
    std:: cout << " Introduceti un numar: ";
    std::cin >> nr;
    
    if (!(nr % 2)) { // if (nr % 2 == 0)
        std::cout << " Am citit valoare para" << std::endl;
    }
    
    return 0;
}
