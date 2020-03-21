// citesc un integer si vreau sa pun cifrele acelui nr intr-un vector

#include <iostream>
using namespace std;

int main () {
    
    int v[10], nr;
    int i;
    
    cout << " Numarul = ";
    cin >> nr;
    
    for (i = 0; nr != 0; i++) {
        int digit = nr % 10;
        v[i] = digit;
        nr = nr / 10;
    }
    
    /* metoda 1 - nu este metoda cea mai eficienta din pdv al resurselor consumate
    - parcurg vectorul v in sens invers
    - in vectorul q am cifrele numarului in ordinea corecta
    - cu j iau de la primul pana la ultimul element din V
    - k reprezinta indexul elementelor din vectorul q
    
     int q[10], k = 0;
     
    for (int j = i - 1; j >= 0 ; j--) {
        q[k] = v[j];
        k++;
    }
    
    cout << " Q = ";
    for (int j = 0; j < i; j++)
        cout << q[j] << " ";
    cout << endl;
    */
    
    /* metoda 2 -
     - parcurg vectorul v si interschimb valorile acestuia in functie de lungimea sa
     - o sa am un nr de interschimbari = lungime vector / 2
     - in cazul unui vector cu un nr impar de elemente, mijlocul va ramane pe aceeasi pozitie
     */
    
    int end = i - 1, aux;
    for (int j = 0; j < i/2; j++) {
        // vreau sa interschimb v[0] cu v[3], v[1] cu v[2]
        //  v[j] cu v[end]
        aux = v[j];
        v[j] = v[end];
        v[end] = aux;
        end--;
    }
    
    
    cout << " V = ";
    for (int j = 0; j < i; j++)
        cout << v[j] << " ";
    cout << endl;
    
    return 0;
}
