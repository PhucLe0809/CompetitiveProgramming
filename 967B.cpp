#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, a, b; cin >> n >> a >> b;
    vector <int> inp(n); int tmp = 0;
    for (int i = 0; i < n; i++){
        cin >> inp[i]; tmp += inp[i];
    }
    sort(inp.begin()+1, inp.end(), greater<>());
    // for (auto &x:inp) cout << x << " ";
    int i = 0;
    while ((inp[0]*a*1.0)/tmp < b*1.0){
        tmp -= inp[i+1]; i++;
    }
    cout << i;
    return 0;
}