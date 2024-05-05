#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string str; cin >> str;
    str += 'a';
    int cnt = 0;
    for (int i = 1; i < str.size(); i++){
        if (str[i] >= 'a' && str[i] <= 'z' && str[i-1] >= 'A' && str[i-1] <= 'Z') cnt++;
    }
    cout << cnt;
    return 0;
}