#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    string str; cin >> str;
    string pivot = "luyencode";
    int cnt = 0;
    for (int i = 0; i <= n - pivot.size(); i++){
        string temp = str.substr(i, pivot.size());
        cnt += (int)(temp == pivot);
    }
    cout << cnt;
    return 0;
}