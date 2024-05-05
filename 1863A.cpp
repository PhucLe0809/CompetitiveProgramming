#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n, a, q; cin >> n >> a >> q;
    string str; cin >> str;
    int status = (a == n)?(2LL):(0LL);
    int pos = 0, cnt = a;
    for (auto &it:str){
        if (it == '+'){
            cnt++; pos++;
            if (cnt >= n) status = max(status, 2LL);
        }
        if (it == '-'){
            cnt--;
        }
    }
    if (a + pos < n){
        status = 0LL;
    }else{
        if (a + pos >= n) status = max(status, 1LL);
    }
    switch (status){
        case 0: cout << "NO\n"; break;
        case 1: cout << "MAYBE\n"; break;
        case 2: cout << "YES\n"; break;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}