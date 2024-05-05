#include <bits/stdc++.h>

using namespace std;

bool is_substr(string &a, string &b){
    int n = a.size(), m = b.size();
    if (n > m) return false;
    string temp = b.substr(0, n);
    for (int j = 0; j < m; j++){
        if (temp == a) return true;
        temp += b[j + n];
        temp.erase(temp.begin());
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n, m; cin >> n >> m;
        string str, ansi; cin >> str >> ansi;
        int cnt = 0;
        while (str.size() < ansi.size()){
            cnt ++; str += str;
        }
        if (!is_substr(ansi, str)){
            cnt++; str += str;
            if (!is_substr(ansi, str)) cout << -1 << '\n';
            else cout << cnt << '\n';
        }else cout << cnt << '\n';
    }
    return 0;
}