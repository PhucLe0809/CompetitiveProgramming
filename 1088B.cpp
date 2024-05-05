#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    vector <int> inp(n+1); inp.push_back(0);
    for (int i = 0; i < n; i++) cin >> inp[i];
    sort(inp.begin(), inp.end());
    inp.erase(unique(inp.begin(), inp.end()), inp.end());
    int i = 1;
    while (k--){
        if (i>=inp.size()) cout << 0 << '\n';
        else{
            cout << inp[i]-inp[i-1] << '\n';
            i++;
        }
    }
    return 0;
}