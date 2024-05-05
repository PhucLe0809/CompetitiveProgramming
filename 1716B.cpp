#include <bits/stdc++.h>

using namespace std; 
int32_t scan[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n;
    while (test--){
        cin >> n;
        cout << n << '\n';
        for (int i = 1; i <= n; i++){
            cout << i << " ";
            scan[i] = i;
        }
        cout << '\n';
        for (int i = n; i > 1; i--){
            swap(scan[i], scan[i-1]);
            for (int i = 1; i <= n; i++) cout << scan[i] << " ";
            cout << '\n';
        }
    }
    return 0;
}