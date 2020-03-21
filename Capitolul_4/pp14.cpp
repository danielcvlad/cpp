/*
 * sirul definit (FIBONACCI)
 */

#include <iostream>

int main () {
    
    int i, n, fib0, fib1;
    int result = 0;
    fib0 = 0;
    fib1 = 1;
    
    std::cout << " n = " << std::endl;
    std::cin >> n;
    
    if (n == 0) {
        result = fib0;
        std::cout << result << std::endl;
        return 0;
    }
    if (n == 1) {
        result = fib1;
        std::cout << result << std::endl;
        return 0;
    }
    
    for ( i = 2; i <= n; i++) {
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
    
    std::cout << result << std::endl;
    return 0;
}
