#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

int cnt(string &str){
    int out = 0;
    for (auto &it:str) out += (it == '1');
    return out;
}
void GOTOHANOI(){
    int n; cin >> n;
    string str, ansi; cin >> str >> ansi;
    int a = cnt(str), b = cnt(ansi);
    int num = 0;
    for (int i = 0; i < n; i++){
        if (ansi[i] == '0' && str[i] == '1') num++;
    }
    cout << num + max(b - a, 0LL) << endl;
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