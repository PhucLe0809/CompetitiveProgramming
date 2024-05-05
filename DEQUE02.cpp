#include <bits/stdc++.h>
#define inf 2000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    vector <int> inp(n+1), dp(n+2);
    int answer = 0;
    for (int i = 1; i <= n; i++){
        cin >> inp[i]; dp[i] = inf;
        answer += inp[i];
    }
    dp[0] = 0; dp[n+1] = inf;
    deque <int> dq; 
    for (int i = 1; i <= n+1; i++){
        while (!dq.empty() && dp[dq.back()] >= dp[i-1]) dq.pop_back();
        dq.push_back(i-1);
        if (dq.front() < i-k) dq.pop_front();
        dp[i] = dp[dq.front()] + inp[i-1];
    }
    cout << answer - dp[n];
    return 0;
}