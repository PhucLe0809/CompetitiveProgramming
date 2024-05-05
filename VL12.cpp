#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    if (n == 0) cout << "INF";
    else{
        for (int i = abs(n); i >= 1; i--){
            if (n % i == 0) cout << i << " ";
        }
    }
    return 0;
}