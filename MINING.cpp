#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxsize 1005

using namespace std;
int matrix[maxsize][maxsize], dp[maxsize][maxsize];
int lef[maxsize][maxsize], rgh[maxsize][maxsize];
int upp[maxsize][maxsize], dow[maxsize][maxsize];

signed main(){

    int n, m; cin >> n >> m;
    vector <pair<int, pair<int, int>>> height;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> matrix[i][j];
            height.push_back({matrix[i][j], {i, j}});
        }
    }

    stack <int> sta;

    for (int i = 1; i <= n; i++){
        while (!sta.empty()) sta.pop();
        for (int j = 1; j <= m; j++){
            while (!sta.empty() && matrix[i][sta.top()] <= matrix[i][j]) sta.pop();
            lef[i][j] = !sta.empty() ? sta.top() : 0;
            sta.push(j);
        }
    }
    for (int i = 1; i <= n; i++){
        while (!sta.empty()) sta.pop();
        for (int j = m; j >= 1; j--){
            while (!sta.empty() && matrix[i][sta.top()] <= matrix[i][j]) sta.pop();
            rgh[i][j] = !sta.empty() ? sta.top() : m + 1;
            sta.push(j);
        }
    }
    for (int j = 1; j <= m; j++){
        while (!sta.empty()) sta.pop();
        for (int i = 1; i <= n; i++){
            while (!sta.empty() && matrix[sta.top()][j] <= matrix[i][j]) sta.pop();
            upp[i][j] = !sta.empty() ? sta.top() : 0;
            sta.push(i);
        }
    }
    for (int j = 1; j <= m; j++){
        while (!sta.empty()) sta.pop();
        for (int i = n; i >= 1; i--){
            while (!sta.empty() && matrix[sta.top()][j] <= matrix[i][j]) sta.pop();
            dow[i][j] = !sta.empty() ? sta.top() : n + 1;
            sta.push(i);
        }
    }

    sort(height.begin(), height.end(), greater<>());
    int land = 0;
    for (int id = 0; id < n * m; id++){
        pair <int, int> pivot = height[id].second;
        int i = pivot.first;
        int j = pivot.second;
        if (i == 1 || i == n || j == 1 || j == m) continue;

        int res = LONG_MAX;
        res = min(res, dp[i][lef[i][j]] + max(matrix[i][lef[i][j]] - matrix[i][j], 0LL));
        res = min(res, dp[i][rgh[i][j]] + max(matrix[i][rgh[i][j]] - matrix[i][j], 0LL));
        res = min(res, dp[upp[i][j]][j] + max(matrix[upp[i][j]][j] - matrix[i][j], 0LL));
        res = min(res, dp[dow[i][j]][j] + max(matrix[dow[i][j]][j] - matrix[i][j], 0LL));
        dp[i][j] = res; matrix[i][j] += res;
        land += dp[i][j];
        
        // cout << i << " " << j << " "; 
        // cout << lef[i][j] << rgh[i][j] << upp[i][j] << dow[i][j] << " ";
        // cout << dp[i][j] << endl;
    }
    cout << land << endl;

    return 0;
}
