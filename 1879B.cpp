#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    vector<int> a(n), b(n);
    for (auto& it:a) cin >> it;
    for (auto& it:b) cin >> it;
    int amin = *min_element(a.begin(), a.end());
    int asum = accumulate(a.begin(), a.end(), 0LL);
    int bmin = *min_element(b.begin(), b.end());
    int bsum = accumulate(b.begin(), b.end(), 0LL);
    int answer = min(amin * n + bsum, bmin * n + asum);
    cout << answer << endl;
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