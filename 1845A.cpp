#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n, k, x; cin >> n >> k >> x;
        if (n%k==0 && k!=x){
            cout << "YES\n"; 
            cout << n/k << '\n';
            for (int i = 0; i < n/k; i++) cout << k << " ";
            cout << '\n';
            continue;
        }
        if (x != 1){
            cout << "YES\n";
            cout << n << '\n';
            for (int i = 0; i < n; i++) cout << 1 << " ";
            cout << '\n';
        }else{
            if (k == 1){
                cout << "NO\n"; continue;
            }
            if (k == 2 && n <= 3){
                cout << "NO\n"; continue;
            }
            if (k == 2 && n%2!=0){
                cout << "NO\n"; continue; 
            }
            cout << "YES\n";
            cout << n/2 << '\n';
            for (int i = 0; i < n/2-(n%2!=0); i++) cout << 2 << " ";
            if (n%2!=0) cout << 3 << " ";
            cout << '\n';
        }
    }
    return 0;
}