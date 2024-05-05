#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    if (n == 1){
        cout << 1; return 0;
    }
    if (n == 2){
        cout << 1 << " " << 1; return 0;
    }
    int f0 = 1, f1 = 1, fi;
    cout << f0 << " " << f1 << " ";
    for (int i = 2; i < n; i++){
        fi = f0 + f1;
        f0 = f1; f1 = fi;
        cout << fi << " ";
    }
    return 0;
}