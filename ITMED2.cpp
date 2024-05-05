// #pragma GCC target ("avx2")
// #pragma GCC optimize ("03")
// #pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n, k; cin >> n >> k;
    vector <int> inp(n+1);
    for (int i = 1; i <= n; i++) cin >> inp[i];
    vector <int> dp(n+1); dp[n] = max(inp[n], 0LL);
    int answer = dp[n];
    deque <int> que; que.push_back(n);
    for (int i = n-1; i >= 1; i--){
        int val = max(inp[i] + dp[que.front()], 0LL);
        dp[i] = val; answer = max(answer, dp[i]);
        while (!que.empty() && dp[que.back()] <= val) que.pop_back();
        que.push_back(i);
        if (que.front() >= i+k) que.pop_front();
    }
    cout << answer << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int test = 1; // cin >> test;
    while (test--){
        GOTOHANOI();
    }

    return 0;
}