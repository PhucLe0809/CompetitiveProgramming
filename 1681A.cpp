#include <bits/stdc++.h>

using namespace std; 
int32_t alice[55], bob[55];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, m, i, j;
    bool check;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++) cin >> alice[i];
        cin >> m;
        for (int i = 0; i < m; i++) cin >> bob[i];
        if (*max_element(alice, alice+n) >= *max_element(bob, bob+m)) 
            cout << "Alice\n";
        else cout << "Bob\n";
        if (*max_element(bob, bob+m) >= *max_element(alice, alice+n)) 
            cout << "Bob\n";
        else cout << "Alice\n";
    }
    return 0;
}