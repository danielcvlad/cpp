# include <iostream>

int main () {
    
    int v[10], n, k, aux;
    
    std::cout << " Lungimea vectorului V = ";
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        std::cout << " v[ " << i << " ] = ";
        std::cin >> v[i];
    }
    
    std::cout << " Numarul de rotatii spre dreapta = ";
    std::cin >> k;
    /*
     recalculez valoarea lui k pentru a micsora nr de pasi pe care ii fac/ optimizare
     k = k % n
     n = 3
     k = 0 => 0 % 3 = 0
     k = 1 => 1 % 3 = 1
     k = 2 => 2 % 3 = 2
     k = 3 => 3 % 3 = 0
     k = 4 => 4 % 3 = 1
     k = 5 => 5 % 3 = 2
     k = 6 => 6 % 3 = 0
     k = 7 => 7 % 3 = 1
     k = 8 => 8 % 3 = 2
     */
    k = k % n;
    while (k > 0) {
        aux = v[n - 1];
        for (int i = n - 1; i > 0; i--) {
            v[i] = v[i - 1];
        }
        v[0] = aux;
        k--;
    }
    
    for (int i = 0; i < n; i++)
        std::cout << v[i] << " ";
    std::cout << std::endl;
    
    return 0;
}

