#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    string str; int total, even, zero;
    while (test--){
        cin >> str;
        total = even = zero = 0;
        for (auto &it:str){
            total += (it-'0');
            if (!((it-'0')&1)) even++;
            if (it=='0') zero++;
        }
        if (total%3==0 && even>1 && zero>0) cout << "red\n";
        else cout << "cyan\n";
    }
    return 0;
}