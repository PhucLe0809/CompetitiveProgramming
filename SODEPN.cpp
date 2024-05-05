#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string str; cin >> str;
    int sdigit = 0; 
    for (auto &it:str) sdigit += it - '0';
    if (sdigit % 10 == 9) cout << "YES"; else cout << "NO";
    return 0;
}