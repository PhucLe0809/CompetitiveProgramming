#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    string str; cin >> str;
    int cntl = 0, cnto = 0;
    for (auto &it:str){
        cntl += (it == 'L');
        cnto += (it == 'O');
    }
    int al = 0, ao = 0;
    for (int i = 0; i < n-1; i++){
        al += (str[i] == 'L');
        ao += (str[i] == 'O');
        if (al != cntl - al && ao != cnto - ao){
            cout << i + 1 << endl;
            return;
        }
    }
    cout << -1 << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1; // cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}