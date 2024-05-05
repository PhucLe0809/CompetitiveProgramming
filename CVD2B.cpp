#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    vector <int> pow2(1, 1);
    for (int i = 1; i < 63; i++) pow2.push_back(pow2.back() * 2);
    while (test--){
        string str; cin >> str;
        int num = 0, len = str.size();
        for (int i = 0; i < len; i++) num += (str[i] - '0') * pow2[len - i - 1];
        cout << num << endl;
    }
    return 0;
}