#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t k, l; cin >> k >> l;
    int64_t cnt = 1;
    while (int64_t(pow(k, cnt))<l) cnt++;
    if (int64_t(pow(k, cnt))!=l) cout << "NO\n";
    else{
        cout << "YES\n" << cnt-1;
    }
    return 0;
}