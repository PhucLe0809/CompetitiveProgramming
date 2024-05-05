#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        string str; cin >> str;
        int sum = 0;
        for (auto &it:str) sum += it - '0';
        cout << sum << endl;
    }
    return 0;
}