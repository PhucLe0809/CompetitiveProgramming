#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    vector <string> inp(n);
    map <string, bool> mp;
    for (auto &it:inp) cin >> it, mp[it] = true;
    string answer = "";
    for (int i = 0; i < n; i++){
        string pre, suf = inp[i]; bool check = false;
        for (int j = 0; j < (int)inp[i].size() && !check; j++){
            pre += inp[i][j]; suf.erase(suf.begin());
            check = check || (mp[pre] && mp[suf]);
        }
        answer += to_string((int)check);
    }
    cout << answer << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}