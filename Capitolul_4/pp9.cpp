/*
 * - sir de numere -  suma intre 1, 3, 5..., produsul intre 2, 4, 6....
 Q&A: Programul se opreste cand utilizatorul introduce valoarea 0
 Punem prima conditie ca daca valoarea initiala este 0 programul sa afiseze mesaj
 A doua conditie while face ca la introducerea ulterioara a valorii 0 sa se opreasca programul
 */

#include <iostream>

int main() {
    
    int n, nr = 0, prod = 1, sum = 0;
    
    std::cout << " n = " << std::endl;
    std::cin >> n;
    
    if (n == 0) {
        std::cout << "Introduceti un numar diferit de 0" << std::endl;
        return 1; // opreste programul
        
    }
    
    while (n != 0) {
        nr ++;

        if (nr % 2 == 0) {
            prod *= n;
        } else {
            sum += n;
        }
        
        std::cout << " n = " << std::endl;
        std::cin >> n;
    }
    std::cout << " Suma nr este " << sum << std::endl;
    std::cout << " Produsul nr este " << prod << std::endl;
    
    return 0;
}
