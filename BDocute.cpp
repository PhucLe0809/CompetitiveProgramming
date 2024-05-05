#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n; bool check;
    while (test--){
        cin >> n;
        vector <int> inp(n);
        for (int i = 0; i < n; i++) cin >> inp[i];
        sort(inp.begin(), inp.end());
        inp.erase(unique(inp.begin(), inp.end()), inp.end());
        check = true;
        for (int i = 1; i < inp.size(); i++){
            if (inp[i]-inp[i-1]!=1) check = false;
        }
        if (check) cout << "YES\n"; else cout << "NO\n";
    }
    return 0;
}