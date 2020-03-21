# include<iostream>

int main () {
    
    int v[10], n, nr, add, aux;
    
    std::cout << " Nr de elemente al vectorului = " <<std::endl;
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        std::cout << " v[ " << i << " ] = ";
        std::cin >> v[i];
    }
    
    std::cout << " Introduceti nr cu care inmultim " << std::endl;
    std::cin >> nr;
    
    // add - variabila unde stochez zecimala
    add = 0;
    // descrescator pentru ca incep inmultirea de la coada la cap
    for (int i = n - 1; i >= 0; i--) {
        // aux - variabila auxiliara care stocheaza rezultatul inmultirii a doua cifre
        //     - posibil mai mare decat 10, trebuie sa o descompun ca sa obtin doar o cifra
        aux = v[i] * nr;
        // v[i] - in index stochez rezultatul inmultirii
        // iau ultima cifra din aux si adun ce ramane de la pasul anterior
        v[i] = aux % 10 + add;
        // stabilesc valoarea pe care o adaug la pasul urmator
        add = aux / 10;
        // atunci cand setez v[i] pot avea un rezultat >= 10
        if (v[i] >= 10) {
            //adaug in variabila add prima cifra / actualizez ce valoare voi folosi la pasul urmator
            add += v[i] / 10;
            // pun cifra corecta in urma operatiunii de inmultire
            v[i] = v[i] % 10;
        }
    }
    
    std::cout << " Rezultatul inmultirii = " << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
  
    return 0;
}
