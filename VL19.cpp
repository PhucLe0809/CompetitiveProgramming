#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a, b; cin >> a >> b;
    bool check = true;
    for (int i = b-1; i > a; i--){
        if (i % 3 == 0){
            cout << i << " "; check = false;
        }
    }
    if (check) cout << "NOT FOUND";
    return 0;
}