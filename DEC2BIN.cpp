#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        string str = "";
        while (n){
            str = (char)(n % 2 + 48) + str;
            n /= 2;
        }
        cout << str << endl;
    }
    return 0;
}