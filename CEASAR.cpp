#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string pivot = "abcdefghijklmnopqrstuvwxyz";
    string str; cin >> str;
    int k; cin >> k;
    for (auto &it:str) cout << pivot[((it - 97) - k + 2*26) % 26];
    return 0;
}