# include <iostream>

int main () {
    
    int v[10], n, max, min;
    
    std::cout << " Introduceti nr de elemente din vector = " ;
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        std:: cout << " v[ " << i << " ] = ";
        std:: cin >> v[i];
    }
    max = v[0];
    min = v[0];
    
    for (int i = 1; i < n; i++) {
        if (v[i] > max)
            max = v[i];
        if (v[i] < min)
            min = v[i];
    }
    
    std::cout << " Valoarea maxima din vector este = " << max << std::endl;
    std::cout << " Valoarea minima este = " << min << std::endl;
    
    return 0;
}
// n = 6,  22 0 -4 5 -10 50
