#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        string str; cin >> str;
        bool a, b, c; a = b = c = false;
        for (auto &it:str){
            if (isdigit(it)) a = true;
            if (it >= 'a' && it <= 'z') b = true;
            if (it >= 'A' && it <= 'Z') c = true;
        }
        int bonus = 0;
        if (a && b && c) bonus = 5;
        else{
            if ((a && b) || (a && c) || (b && c)) bonus = 2;
            else if (a || b || c) bonus = 1;
        }
        int res = min(5LL, max((int)str.size() - 5, 0LL)) + bonus;
        cout << res << " ";
    }
    return 0;
}