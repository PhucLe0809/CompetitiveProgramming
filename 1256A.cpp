#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int64_t a, b, n, s;
    while (test--){
        cin >> a >> b >> n >> s;
        s -= min(s, min((s/n), a)*n);
        s -= min(s, b);
        if (s==0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}