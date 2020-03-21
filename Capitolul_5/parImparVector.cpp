#include <iostream>

int main () {
    
    int v[10], par[10], impar[10], n, lenPar = 0, lenImpar = 0;
    
    std::cout << " Elementele vectorului V = ";
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        std::cout << " v[ " << i << " ] = ";
        std::cin >> v[i];
    }
    
    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            par[lenPar] = v[i];
            lenPar++;
            
        } else {
            impar[lenImpar] = v[i];
            lenImpar++;
        }
    }
    
    std::cout << " Vectorul V are " << lenPar << " elemente pare si " << lenImpar <<" elemente impare";
    std::cout << std::endl;
    
    return 0;
}
