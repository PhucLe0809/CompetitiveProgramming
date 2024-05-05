#include <bits/stdc++.h>

using namespace std;
vector <int> inp;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int x, s; s = 0;
    for (int i = 0; i < n; i++){
        cin >> x; s += x;
        inp.push_back(x);
    }
    sort(inp.begin(), inp.end());
    int cnt = 0;
    for (int i = 0; i < n; i++){
        if (round(s*1.0/n)>=5.0) break;
        cnt++; s += 5-inp[i];
    }
    cout << cnt;
    return 0;
}