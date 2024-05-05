#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        vector <int> inp(n);
        for (int i = 0; i < n; i++) cin >> inp[i];
        sort(inp.begin(), inp.end());
        if (inp[0]==inp[n-1]) cout << "-1\n";
        else{
            vector <int> out;
            for (int i = n-1; i >= 0; i--){
                if (inp[i] == inp[n-1]){
                    out.push_back(inp[i]);
                }else break;
            }
            cout << n-out.size() << " " << out.size() << '\n';
            for (int i = 0; i < n-out.size(); i++) cout << inp[i] << " "; cout << '\n';
            for (auto &x:out) cout << x << " "; cout << '\n';
        }
    }
    return 0;
}