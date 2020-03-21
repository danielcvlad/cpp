#include<iostream>

int main () {
    
    int v[10], aux[10], n;
    
    std::cout << " Introduceti nr de elemente = " ;
    std::cin >> n;
    
    
    for (int i = 0; i < n; i++) {
        std::cout << " v[ " << i << " ] = ";
        std::cin >> v[i];
        aux[i] = v[i];
    }
    
    int prev = v[0];
    for (int i = 1; i < n - 1; i++) {
        int aux = v[i];
        v[i] = (prev + v[i + 1]) / 2;
        prev = aux;
    }
/*
 
 */
    
    /*
    
    for (int i = 1; i < n; i++)
        aux[i] = (v[i - 1] + v[i + 1]) / 2;
    
    for (int i = 1; i < n - 1; i++)
        v[i] = aux[i];
    */
    for (int i = 0; i < n; i++)
        std::cout << v[i] << " ";
    std::cout << std:: endl;
    
    return 0;
}


/*
 0    1    2    3    4    5
 
 2    10    12    22    8    6

 prev = v[0]
 
 aux = v[1] = 10
 v[1] = (v[i - 1] + v[i + 1] ) =( 2 + 12 ) / 2 = 7
 v[1] = (prev + v[i + 1])
 prev = aux = 10
 
 2  7   12  22  8   6
 
 aux = v[2] = 12
 v[2] = ( 10 + 22) / 2
 
 
 Generalizat:
 aux = v[i]
 v[i] = (prev + v[ i + 1]) / 2
 prev = aux
 */
