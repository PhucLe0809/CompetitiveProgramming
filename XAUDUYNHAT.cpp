#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    string str; cin >> str;
    vector <int> scan(255, -1);
    int n = str.size();
    int l = 0, r = 0, res = 1;
    while (r < n){
        if (scan[str[r]] == -1){
            scan[str[r]] = r;
            r++; continue;
        }
        res = max(res, r - l);
        int pivot = scan[str[r]];
        while (l <= pivot){
            scan[str[l]] = -1; l++;
        }
        scan[str[r]] = r; r++;
    }
    res = max(res, r - l);
    cout << res;
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