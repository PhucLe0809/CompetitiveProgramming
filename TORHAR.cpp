#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
int x, y;

pair<int, int> f(pair<int, int> n){
    return pair<int, int> {n.second * 10 / y, n.second * 10 - (n.second * 10 / y) * y};
}
void GOTOHANOI(){
    cin >> x >> y;
    cout << x / y << ".";
    pair <int, int> t, h;
    t.first = h.first = 1;
    t.second = h.second = x % y;
    while (true){
        t = f(t);
        h = f(f(h));
        if (t.second == h.second) break;
    }
    string mju = "";
    pair <int, int> p; p.first = 1; p.second = x % y;
    while (true){
        p = f(p);
        t = f(t);
        mju += (char)(p.first + '0');
        if (p.second == t.second) break;
    }
    string lamda = "";
    while (true){
        p = f(p);
        lamda += (char)(p.first + '0');
        if (p.second == t.second) break;
    }
    if (mju.back() == lamda.back()){
        lamda = mju.back() + lamda;
        mju.pop_back();
        lamda.pop_back();
    }
    cout << mju << "(" << lamda << ")" << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1; //cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}