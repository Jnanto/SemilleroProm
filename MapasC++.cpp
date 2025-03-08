
#include <bits/stdc++.h>

using namespace std; 
int main() {
    
    // map<tipo_llave, tipo_valor> mapa / no guarda instancias iguales
    map<char, int> mp; 
    
    mp['a'] = 4;
    mp['b'] = 5;
    mp['c'] = 8; 
    // otra forma de añadir elementos 
    mp.insert(make_pair('k' , 7));  
    // borrar elemento
    mp.erase('c'); 
    cout << mp['a'] << endl; 
    for ( auto x : mp) {  
        // first(llave) second(valor) 
         cout << x.first << " " << x.second << endl; 
        // valor por defecto del mapa 0  
        // saber si esta o no
        cout << mp.count('c') << endl;  
        // saber tamaño del mapa 
        cout << mp.size() << endl; 
        
        // ejercicio 1 
        string a = "asdcaaf"; 
        map <char, int> mp1; 
        for (int i = 0; i < a.size(); i++) { 
            mp1[a[i]]++; 
        }  
        
        for (auto x : mp1) { 
            cout << x.first << " " << x.second << endl; 
        } 
        
    } 
    
    return 0;
} 
