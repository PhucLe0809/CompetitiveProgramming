#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n, k; cin >> n >> k;
    vector <int> cnt(26);
    for (int i = 0; i < n; i++){
        char key; cin >> key; cnt[key - 'a']++;
    }
    int even = 0, odd = 0;
    for (auto &it:cnt) even += it - it % 2, odd += it % 2;
    k = n - k;
    if (even >= k - k%2 && (even - (k - k%2)) + odd >= k%2) cout << "YES\n"; else cout << "NO\n";
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