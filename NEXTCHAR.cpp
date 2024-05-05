#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    char key; cin >> key;
    if (key == 'z') cout << 'a';
    else cout << (char)(++key);
    return 0;
}