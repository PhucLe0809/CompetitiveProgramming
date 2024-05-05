#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    sort(inp.begin(), inp.end());
    while (inp[0]!=inp[n-1]){
        for (int i = n-1; i > 0; i--){
            inp[i] = inp[i]%inp[i-1];
            if (inp[i]==0) inp[i] = inp[i-1];
        }
        sort(inp.begin(), inp.end());
    }
    cout << inp[0]*n;
    return 0;
}