/*
 * sirul definit (FIBONACCI)
 */

#include <iostream>

/*
 Numele functie: countValuesFromFibonacci
 Parametrii functiei: n - numar natural pozitiv
 Valoarea de return: numarul de termeni din sirul fibonacci mai mici decat n
 Atunci cand functia este apelata fibonacci(nr), valoarea lui nr este
 copiata in parametrul n
 */
int countValuesFromFibonacci(int n) {
    int result = 0;
    int fib0, fib1;
    int count = 0;
    
    if (n < 0) {
        std::cout << "n trebuie sa fie numar natural pozitiv" << std::endl;
        return -1;
    }
    
    fib0 = 0;
    fib1 = 1;
    
    if (fib0 < n)
        count++;
    if (fib1 < n)
        count++;

    for (int i = 2; i <= n; i++) {
        /*    u(n-2)  + u(n-1)
         fib0    + fib1
         pt 2: 0      + 1
         pt 3: 1      + 1
         pt 4: 1      + 2
         pt 5: 2      + 3
         pt 6: 3      + 5
         pt 7: 5      + 8
         pt 8: 8      + 13
         */
        result = fib0 + fib1;
        if (result >= n) {
            return count;
        }
        count++;
        fib0 = fib1;
        fib1 = result;
    }

    return count;
}

int main () {
    int nr;

    std::cout << " nr = " << std::endl;
    std::cin >> nr;

    int res = countValuesFromFibonacci(nr);
    if (res > 0) {
        std::cout << res << std::endl;
    }
    
    return 0;
}
