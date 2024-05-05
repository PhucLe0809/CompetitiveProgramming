#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    pair <char, char> rook; cin >> rook.first >> rook.second;
    for (char i = '1'; i <= '8'; i++){
        if (i != rook.second) cout << rook.first << i << endl;
    }
    for (char i = 'a'; i <= 'h'; i++){
        if (i != rook.first) cout << i << rook.second << endl;
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