#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int neg = 0, pos = 0;
    for (int i = 0; i < n; i++){
        string str; cin >> str;
        if (str[0] == '-') neg++;
        else if (str[0] != '0') pos++;
    }
    cout << neg << " " << pos;  
    return 0;
}