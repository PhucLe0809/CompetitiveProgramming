#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    string str; cin >> str;
    if (str.back()=='#') cout << "NO\n";
    else{
        int res, cnt;
        res = cnt = 0;
        for (auto x:str){
            if (x=='#') cnt++;
            else{
                res = max(res, cnt);
                cnt = 0;
            }
        }
        if (res>=k) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}