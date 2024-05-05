#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int x;
    vector <int> inp;
    for (int i = 0; i < n; i++){
        cin >> x; inp.push_back(x);
    }
    sort(inp.begin(), inp.end());
    bool check = false; int it;
    for (int i = 0; i<=n-3 && !check; i++){
        it = lower_bound(inp.begin()+i+2, inp.end(), inp[i]+inp[i+1])-inp.begin();
        it--;
        if (it>i+1 && inp[i]+inp[i+1]>inp[it]) check = true;
    }
    if (check) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}