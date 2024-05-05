#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    string str; cin >> str;
    int a = 0, b = 0, n = str.size();
    for (auto &it:str){
        a += (int)(it == '0');
        b += (int)(it == '1');
    }
    int k = 0;
   while (k < n && a && b){
        (str[k] == '0')?(b--):(a--);
        k++;
    }
    while (a && str[k] == '1') a--, k++;
    while (b && str[k] == '0') b--, k++;
    cout << max(a, b) << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}