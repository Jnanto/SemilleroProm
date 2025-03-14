
#include <bits/stdc++.h>
#include <stack>
using namespace std; 
int main() {
 
    int n;
    cin >> n; 
    
    for (int i = 0; i<n; i++){ 
        
        string s; 
        cin >> s; 
        stack <char> st; 
        
        for(auto &&i : s) { 
         
         if(!st.empty()){ 
             if(st.top() == '(' && s[i] == ')'){ 
                 st.pop();
             } 
             else if (st.top() == '[' && s[i] == ']'){ 
                 st.pop(); 
             } 
             else if (st.top() == '{' &&  s[i] == '}'){ 
                 st.pop(); 
             } else { 
                 st.push( s[i]); 
             } 
             
            } else { 
                st.push( s[i]); 
            }
             
            
        } 
        
        if(st.empty()){ 
            cout << "YES" << endl; 
        } else { 
            cout << "NO" << endl; 
        } 
        
    }

    return 0;
}