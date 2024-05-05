#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    string str; cin >> str;
    if (n % 2 != 0){
        cout << "No\n"; return 0;
    }
    int cnt, minn, maxx; 
    cnt = 0; minn = INT_MAX; maxx = INT_MIN;
    for (auto &x:str){
        if (x == '('){
            cnt++; 
            maxx = max(maxx, cnt);
        }
        if (x == ')'){
            cnt--;
            minn = min(minn, cnt);
        }
    }
    if (minn < -1) cout << "No\n";
    else{
        if (cnt == 0) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}