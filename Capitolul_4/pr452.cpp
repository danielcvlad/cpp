/*
* inversarea cifrelor unui nr natural n
*/

# include <iostream>

int main() {
    
    int n, ninv = 0;
    
    std::cout << "n = ";
    std::cin >> n;
    
    while (n) {
        ninv = ninv * 10 + n % 10;
        n = n / 10;
    }
    std::cout << " numarul inversat " << ninv << std::endl;
    
    return 0;
}
