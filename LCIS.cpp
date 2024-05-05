#include <bits/stdc++.h>
#define maxarray 3005

using namespace std;
int best[maxarray];
int dp[maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    vector <int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector <int> b(m);
    for (int i = 0; i < m; i++) cin >> b[i];
    fill(best, best + maxarray, 0);
    int answer = 0;
    for (int i = 0; i < n; i++){
        int value = 0;
        fill(dp, dp + maxarray, 0);
        for (int j = 0; j < m; j++){
            if (a[i] == b[j]) dp[j] = value+1;
            else if (a[i] > b[j]) value = max(value, best[j]);
            answer = max(answer, dp[j]);
        }
        for (int j = 0; j < m; j++) best[j] = max(best[j], dp[j]);
    }
    cout << answer;
    return 0;
}

