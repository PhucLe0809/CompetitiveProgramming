#include <bits/stdc++.h>

using namespace std;
vector <int> inp;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    int x;
    for (int i = 0; i < n; i++){
        cin >> x; inp.push_back(x);
    }
    sort(inp.begin(), inp.end());
    cout << inp[n-k];
    return 0;
}