#include <bits/stdc++.h>
#define int uint64_t
#define endl '\n'

using namespace std;
vector <int> dpow(1, 1);

void GOTOHANOI(int &t){
    int n; cin >> n;
    int cnt = 0;
    while (n != 1){
        auto it = lower_bound(dpow.begin(), dpow.end(), n);
        if (*it == n) n /= 2; else n -= *(--it);
        cnt++;
    }
    cout << "Case #" << t+1 << ": ";
    if (cnt % 2 != 0) cout << "yes\n"; else cout << "no\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    for (int i = 1; i < 64; i++) dpow.push_back(dpow.back() * 2);
    int i = 0;
    while (test--){
        GOTOHANOI(i); i++;
    }
    return 0;
}