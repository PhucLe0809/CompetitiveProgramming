#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t a, b; bool check;
    while (test--){
        cin >> a >> b; check = true;
        if (a > b){
            swap(a, b); check = false;
        }
        for (int i = 0; i < a; i++) cout << "01";
        for (int i = a; i < b; i++) cout << check;
        cout << '\n';
    }
    return 0;
}