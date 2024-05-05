#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        vector <int> inp(n), scan(n);
        for (int i = 0; i < n; i++){
            cin >> inp[i]; scan[i] = inp[i];
        }
        sort(inp.begin(), inp.end());
        bool check = true;
        for (int i = 0; i < n && check; i++){
            check = (abs(inp[i] - scan[i]) % 2 == 0);
        }
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}