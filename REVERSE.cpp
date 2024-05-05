#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string str; cin >> str;
    int n = str.size();
    int m; cin >> m;
    vector <int> diff(n+2);
    while (m--){
        int x; cin >> x;
        diff[x]++; diff[n-x+1 + 1]--;
    }
    for (int i = 1; i <= n; i++) diff[i] = diff[i] + diff[i-1];
    for (int i = 0; i < n/2; i++){
        if (diff[i+1] % 2 != 0) swap(str[i], str[n-i-1]);
    }
    cout << str;
    return 0;
}