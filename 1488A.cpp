#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int x, y;
    int cnt; string str;
    while (test--){
        cin >> x >> y;
        str = to_string(y/x);
        cnt = y%x;
        for (auto x:str) cnt += (x-'0');
        cout << cnt << '\n';
    }
    return 0;
}