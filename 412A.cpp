#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    string str; cin >> str;
    if (k<=n-k){
        while (k>1){ cout << "LEFT\n"; k--; }
        for (int i = 0; i < n-1; i++){
            cout << "PRINT " << str[i] << '\n';
            cout << "RIGHT\n";
        }
        cout << "PRINT " << str[n-1];
    }else{
        while (k<n){ cout << "RIGHT\n"; k++; }
        for (int i = n-1; i > 0; i--){
            cout << "PRINT " << str[i] << '\n';
            cout << "LEFT\n";
        }
        cout << "PRINT " << str[0];
    }
    return 0;
}