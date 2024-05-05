#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    string str; cin >> str;
    int cnt = 0;
    for (auto x:str){
        if (x=='1') cnt++; else break;
    }
    if (cnt!=n) cnt++;
    cout << cnt; 
    return 0;
}