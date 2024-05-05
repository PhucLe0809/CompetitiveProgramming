#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str, ansi; cin >> str;
    int n; cin >> n;
    int a = stoi(str.substr(0, 2));
    int b = stoi(str.substr(3, 2));
    int m, x;
    x = a*60+b+n;
    m = x%(24*60);
    str = to_string(m/60);
    if (str.size()<2) str.insert(0, "0");
    ansi = to_string(m%60);
    if (ansi.size()<2) ansi.insert(0, "0");
    cout << str << ":" << ansi;
    return 0;
}