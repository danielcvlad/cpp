/*
 * cate cifre are nr n dat
 */

#include <stdio.h>

int countDigits (int n) {
    
    int count = 0;
    
    while ( n != 0) {
        n = n / 10;
        count++;
    }
    return count;
}

int main () {
    
    int n;
    
    printf("n =  \n");
    scanf("%d", &n);
    
    printf(" Numarul %d are %d cifre \n", n, countDigits(n));
  
    return 0;
}
