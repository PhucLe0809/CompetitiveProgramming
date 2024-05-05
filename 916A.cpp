#include <bits/stdc++.h>

using namespace std;

bool check(int n){
    string str = to_string(n);
    for (auto x:str){
        if (x=='7') return true;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int x; cin >> x;
    int a, b; cin >> a >> b;
    int m = a*60+b;
    int cnt = 0;
    while (!check(m/60) && !check(m%60)){
        cnt++; m -= x;
        if (m <= 0) m += 24*60;
    }
    cout << cnt;
    return 0;
}