/*
 * suma cifrelor unui nr natural n
 */

# include <iostream>

int main() {
    
    int n, s = 0;
    std::cout << "n = ";
    std::cin >> n;
    
    while (n) {
        s = s + n % 10;
        n = n / 10;
    }
    std::cout << s << std::endl;
    return 0;
}
