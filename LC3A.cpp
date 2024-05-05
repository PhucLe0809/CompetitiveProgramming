#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    string str, ansi;
    int i, j;
    for (int t = 1; t <= n; t++){
        cin >> str >> ansi;
        i = j = 0;
        while (i < str.size() && j < ansi.size()){
            if (str[i] == ansi[j]) i++, j++;
            else j++;
        }
        if (i == str.size()){
            cout << "Case #" << t << ": " << ansi.size() - str.size() << '\n';
        }else cout << "Case #" << t << ": IMPOSSIBLE\n";
    }
    return 0;
}