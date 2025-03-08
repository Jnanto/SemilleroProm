
#include <bits/stdc++.h>

using namespace std; 

int main() {
    // set = lista 
    set<int> s; 
    s.insert(4); // añadir elemento en la lista; 
    s.insert(2); 
    s.insert(5); 
    s.insert(3); 
    s.erase(2); // borrar un elemento  
    // saber si un elemento esta en el count 
    cout <<"el set esta vacio? " << (s.empty() == 1 ? "Si esta" : "No esta") << endl; 
    cout <<"el 8 esta en el set?" << (s.count(8) == 1 ? " Si esta" : " No esta") << endl; 
    for (auto x : s) { 
        cout << x << endl; 
    } 

    return 0;
}