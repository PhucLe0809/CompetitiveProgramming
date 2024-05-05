#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    sort(inp.begin(), inp.end());
    int cnt = 0;
    for (int i = 0; i < n; i++){
        if (inp[i]>cnt) cnt++;
    }
    cout << cnt;
    return 0;
}