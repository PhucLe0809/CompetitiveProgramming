#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    string str; cin >> str;
    string pivot = "...";
    int i = 0, j = 0, cnt = 0;
    while (i < n && j < 3){
        if (str[i] == pivot[j]) j++;
        else j = 0;
        cnt += (int)(str[i] == '.');
        i++;
    }
    if (j == 3) cout << 2 << endl;
    else cout << cnt << endl;
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