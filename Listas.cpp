
#include <bits/stdc++.h>
#include <stack>
using namespace std; 
int main() {
 
    // stack <tipo_dato> st; 
    //crear pila
   stack <int> st;   
   //añadir elemento 
   st.push(3); 
   st.push(5); 
   // le aplica empty y size
   st.size(); 
   st.empty(); 
   st.pop(); // eliminar elemento
   
   while(!st.empty()){ 
       int valor = st.top(); 
       cout << valor << endl; 
       st.pop(); 
   }
   

    return 0;
}