#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int x;
    vector <int> inp;
    for (int i = 0; i < n; i++){
        cin >> x;
        inp.push_back(x);
    }
    sort(inp.begin(), inp.end());
    cout << (n-2+1)/2 << '\n';
    for (int i = 1; i < n-1; i+=2) swap(inp[i], inp[i-1]);
    for (auto &it:inp) cout << it << " ";
    return 0;
}