#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    string str; cin >> str;
    vector <int> d(n);
    for (int i = 0; i < n; i++) cin >> d[i];
    bool check = true;
    int i, cnt; i = cnt = 0;
    while (check && cnt<=n){
        if (str[i]=='>'){
            if (i+d[i]>=n) check = false;
            else i += d[i];
        }else{
            if (i-d[i]<0) check = false;
            else i -= d[i];
        }
        cnt++;
    }
    if (!check) cout << "FINITE\n";
    else cout << "INFINITE\n";
    return 0;
}