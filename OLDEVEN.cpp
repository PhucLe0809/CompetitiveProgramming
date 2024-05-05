#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string str; cin >> str;
    int odd = 0, even = 0;
    for (auto &it:str){
        int digit = it - '0';
        if (digit % 2 == 0) even += digit;
        else odd += digit;
    }
    cout << even << endl << odd;
    return 0;
}