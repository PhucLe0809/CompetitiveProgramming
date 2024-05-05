#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str, ansi; cin >> str >> ansi;
    int a = stoi(str.substr(0, 2));
    int b = stoi(str.substr(3, 2));
    int c = stoi(ansi.substr(0, 2));
    int d = stoi(ansi.substr(3, 2));
    int m, x, y;
    x = a*60+b;
    y = c*60+d;
    if (x>=y) m = x-y;
    else m = (24*60+x)-y;
    str = to_string(m/60);
    if (str.size()<2) str.insert(0, "0");
    ansi = to_string(m%60);
    if (ansi.size()<2) ansi.insert(0, "0");
    cout << str << ":" << ansi;
    return 0;
}