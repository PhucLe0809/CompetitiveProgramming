#pragma GCC target ("avx2")
#pragma GCC optimize ("03")
#pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n, k; cin >> n >> k;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;

    deque <int> dq;
    while (!dq.empty()) dq.pop_back();
    for (int i = 0; i < n; i++){
        while (!dq.empty() && inp[dq.back()] >= inp[i]) dq.pop_back();
        dq.push_back(i);
        if (dq.front() <= i - k) dq.pop_front();
        if (i >= k-1) cout << inp[dq.front()] << " ";
    }

    cout << endl;
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