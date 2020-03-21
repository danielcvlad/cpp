/*
 * 4 numere intregi - sa se afiseze in ordine descrescatoare
 * comparam primele 2 cu ultimele 2 si aflam min si max ale celor 2 perechi
 * comparam minimul primei perechi cu minimul celei de a doua
 * stim minimul si una dintre valorile din mijloc
 * comparam maximul primei perechi cu maximul celei de a doua
 * stim maximul si cealalta valoare de mijloc
 * comparam valorile de mijloc
 */

#include <iostream>

int main () {
    
    int a, b, c, d, low_ab, low_cd, high_ab, high_cd, low, mid1, mid2, high;
    
    std::cout << " a = " << " " << "b =" << " " << "c = " << " " << "d = " << std::endl;
    std::cin >> a >> b >> c >> d;
    
    if (a <= b) {
        low_ab = a;
        high_ab = b;
    } else {
        low_ab = b;
        high_ab = a;
    }
    if (c <= d) {
        low_cd = c;
        high_cd = d;
    } else {
        low_cd = d;
        high_cd = c;
    }
    if (low_ab <= low_cd) {
        low = low_ab;
        mid1 = low_cd;
    } else {
        low = low_cd;
        mid1 = low_ab;
    }
    if (high_ab <= high_cd) {
        high = high_cd;
        mid2 = high_ab;
    } else {
        high = high_ab;
        mid2 = high_cd;
    }
    if (mid1 <= mid2) {
        std::cout << high << " > " << mid2 << " > " << mid1 << " > " << low;
        std::cout << std::endl;
    } else {
        std::cout << high << " > " << mid1 << " > " << mid2 << " > " << low;
        std::cout << std::endl;
    }
    
    return 0;
}
