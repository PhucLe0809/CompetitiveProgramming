#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n, k; cin >> n >> k;
    string str; cin >> str;
    int cnta = 0, cntb = 0;
    for (auto &it:str){
        cnta += (it == 'A'); 
        cntb += (it == 'B');
    }
    if (cntb == k){
        cout << 0 << endl; return;
    }
    cout << 1 << endl;
    int ia = 0, ib = 0;
    for (int i = 1; i <= n; i++){
        ia += (str[i-1] == 'A');
        ib += (str[i-1] == 'B');
        if (cntb < k && (cntb - ib) + i == k){
            cout << i << " " << "B" << endl;
            return;
        }
        if (cntb > k && (cntb - ib == k)){
            cout << i << " " << "A" << endl;
            return;
        }
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