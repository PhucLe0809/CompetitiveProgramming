#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n;
    string str;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++) str += "()";
        for (int i = 0; i < n; i++){
            for (int j = 0; j <= i; j++) cout << "(";
            for (int j = 0; j <= i; j++) cout << ")";
            for (int j = i+1; j < n; j++) cout << "()";
            cout << '\n';
        }
    }
    return 0;
}