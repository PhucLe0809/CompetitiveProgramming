#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    while (n > 9){
        string str = to_string(n);
        int sdigit = 0;
        for (auto &it:str) sdigit += it - '0';
        n = sdigit;
    }
    cout << n;
    return 0;
}