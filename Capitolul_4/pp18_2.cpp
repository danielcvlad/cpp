#include <iostream>
#include <cmath>
/*
 * Nume functie: isPrime
 * Parametri: n - verifica daca n este prim sau nu, n numar natural pozitiv
 * Valoarea de return: bool - true (n este prim), false (n nu este prim)
 */
bool isPrime (int n) {
    bool prime = true;

    if (n <= 1)
        return false;
    
    if (n == 2 || n == 3)
        return true;
    
    // i <= sqrt(n) <=> i * i <= n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            prime = false;
            break;
        }
    }
    
    return prime;
}

/*
 * Nume functie: primeDivisors
 * Parametri: n - numarul natural pozitiv, aduna si inmulteste divizorii primi ai lui n
 * Valoare de return: -
 */
void primeDivisors (int n) {
    int sum = 0;
    int prod = 1;
    
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            // i este divizor al lui n
            // tre sa vad daca i este prim
            if (isPrime(i) == true) { // if (isPrime(i))
                sum += i;
                prod *= i;
            }
        }
    }
   
    std::cout<<"suma este "<<sum<<std::endl;
    std::cout<<"produsul este "<<prod<<std::endl;
}

int main () {
    
    int n;
    
    std::cout<<"introduceti n = "<<std::endl;
    std::cin>>n;
    
    primeDivisors(n);
    
    return 0;
}
