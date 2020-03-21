/*
 * suma si produsul divizorilor primi ai unui nr citit
 */

#include <iostream>
#include <cmath>
/*
 * DECLARATIA unei functii:
 *      <return_type> <function_name>(<list_of_parameters>);
 *      void divPrimi(int n);
 *
 * DEFINITIA unei functii:
 *      void divPrimi(int n) {
 *         BODY
 *      }
 */
void divPrimi(int n) {
    int suma = 0;
    int produs = 1;
    
    for (int i = 2; i <= n; i++) {
        if(n % i == 0) {
            // i este divizor al lui n
            // determinam daca i este prim sau nu
            bool prim = true;
            
            // daca i este 2 sau 3 stim ca este prim
            // asa ca il adun la suma si inmultesc la produs
            // continue trece la urmatoarea iteratie a forului
            if(i <= 3) {
                suma += i;
                produs *= i;
                continue;
            }
            for(int j = 2; j <= sqrt(i); j++) {
                if (i % j == 0) {
                    prim = false;
                    // stim ca i nu este prim, oprim for-ul in care suntem
                    break;
                }
            }
            if (prim == true) {
                suma += i;
                produs *= i;
            }
        }
    }
    std:: cout << " Suma divizorilor primi ai lui " << n << " este = " << suma << std::endl;
    std:: cout << " Produsul divizorilor primi ai lui " << n << " este = " << produs << std::endl;
    
}

int main() {
    
    int n;
    
    std::cout << " n = " << std::endl;
    std::cin >> n;
    
    divPrimi(n);
    
    return 0;
}
