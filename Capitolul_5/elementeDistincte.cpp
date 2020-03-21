# include <iostream>

int main () {
    
    int v[10], n, gasit = 0;
    
    std::cout << " Introduceti nr de elemente = ";
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        std::cout << " v [ " << i << " ] = ";
        std::cin >> v[i];
    }
    
    for (int i = 0; i < n && !gasit; i++) {
        for (int j = i + 1; j < n && !gasit; j++) {
            if ( v[i] == v[j])
                gasit = 1;
        }
    }
    /*
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if ( v[i] == v[j] ) {
                gasit = 1;
                break;
            }
        }
    }
    */
    /*
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ( v[i] == v[j] && i != j ) {
                gasit = 1;
                break;
            }
        }
    }
    */
    if (gasit)
        std::cout << " Am gasit doua elemente egale" << std::endl;
    else
        std::cout << " Numerele sunt distincte" << std::endl;
    
    
    return 0;
}
