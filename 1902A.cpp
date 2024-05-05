#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    string str; cin >> str;
    bool check = (str[0] == '0');
    for (int i = 0; i < (int)str.size()-1; i++){
        check = check || (str[i] != str[i+1]);
    }
    if (!check) cout << "NO\n"; else cout << "YES\n";
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