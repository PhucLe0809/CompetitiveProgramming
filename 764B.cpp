#include <bits/stdc++.h>

using namespace std;
vector <int> inp;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int x;
    for (int i = 0; i < n; i++){
        cin >> x;
        inp.push_back(x);
    }
    for (int i = 0; i < n/2; i++){
        if (i%2==0) swap(inp[i], inp[n-i-1]);
    }
    for (auto x:inp) cout << x << " ";
    return 0;
}