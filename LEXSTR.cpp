#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    string str; cin >> str;
    vector <int> inp(26);
    for (auto &it:inp) cin >> it;
    map <char, int> mp;
    for (auto &it:str) mp[it]++;
    for (int i = 0; i < 26; i++){
        inp[i] -= mp[(char)(i + 'a')];
    }
    for (auto &it:str){
        if (it != '?') continue;
        int pos;
        for (pos = 0; pos < 26; pos++){
            if (inp[pos] > 0) break;
        }
        if (pos == 26){
            cout << -1; return 0;
        }
        it = (char)(pos + 'a');
        inp[pos]--;
    }
    for (int i = 0; i < 26; i++){
        if (inp[i] != 0){
            cout << -1; return 0;
        }
    }
    cout << str;
    return 0;
}