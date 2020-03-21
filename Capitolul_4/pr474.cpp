/*
 * s = 0,1 + 0,2 +...+ 0,9
 */

#include <iostream>

int main() {
    
    int i;
    float s = 0;
    
    for (i = 1; i <= 9; i++) {
        s += (float) i / 10;
    }
    std::cout << s;
    std::cout << std::endl;
}
