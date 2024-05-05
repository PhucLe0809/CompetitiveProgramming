#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n = 6; int limit = 0;
    vector <int> inp(n);
    for (int i = 0; i < n; i++){
        cin >> inp[i]; limit += inp[i];
    }
    if (limit&1){
        cout << "NO\n"; return 0;
    }
    bool check = false;
    for (int i = 0; i<=n-3 && !check; i++){
        for (int j = i+1; j<=n-2 && !check; j++){
            for (int k = j+1; k<=n-1 && !check; k++){
                if (inp[i]+inp[j]+inp[k]==limit/2){
                    check = true;
                }
            }
        }
    }
    if (check) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}