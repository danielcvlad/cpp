/*
 * descompunerea in factori primi n - nr natural
 */

# include <iostream>

int main() {
    
    int n, i = 2, fm;
    std::cout << " n = ";
    std::cin >> n;
    
    do {
        fm = 0;
        while (n % i == 0) {
            fm ++;
            n /= i;
        }
        if (fm)
            std::cout << i << " la puterea " << fm << std::endl;
        i++;
    } while (n != 1);
    
    return 0;
}
