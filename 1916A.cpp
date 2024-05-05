#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n, k; cin >> n >> k;
    int multi = 1;
    for (int i = 0; i < n; i++){
        int x; cin >> x; multi *= x;
    }
    if (2023 % multi == 0){
        cout << "YES\n";
        for (int i = 1; i < k; i++) cout << 1 << " ";
        cout << 2023 / multi << endl;
    }else cout << "NO\n";
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