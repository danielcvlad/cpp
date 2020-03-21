/*
 * sirul definit (FIBONACCI)
 */

#include <iostream>

/*
 Numele functie: fibonacci
 Parametrii functiei: n - numar natural pozitiv, calculam fibonacci(n)
 Valoarea de return: intoarce un integer, fibonacci(n)
 Atunci cand functia este apelata fibonacci(nr), valoarea lui nr este
 copiata in parametrul n
 */
int fibonacci(int n) {
    int result = 0;
    int fib0, fib1;
    
    fib0 = 0;
    fib1 = 1;
    
    if (n < 0) {
        std::cout << "n trebuie sa fie numar natural pozitiv" << std::endl;
        return -1;
    }
    
    if (n == 0)
        return fib0;
    if (n == 1)
        return fib1;
    
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
        fib0 = fib1;
        fib1 = result;
    }
    
    return result;
}

int main () {
    int nr;

    std::cout << " nr = " << std::endl;
    std::cin >> nr;

    int res = fibonacci(nr);
    if (res > 0) {
        std::cout << res << std::endl;
    }
    
    return 0;
}
