#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 1005

using namespace std;
int matrix[maxarray][maxarray];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m; cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }
    vector <int> scan;
    for (int i = 0; i < n; i++){
        int a = 0;
        for (int j = 0; j < m; j++){
            if (matrix[i][j] > 0) a += matrix[i][j];
        }
        int b = 0;
        for (int j = 0; j < m; j++){
            if (matrix[i][j] < 0) b += matrix[i][j];
        }
        scan.push_back(max(a, -b));
    }
    sort(scan.begin(), scan.end());
    int res = 0;
    for (int i = n-1; i >= 0 && i >= n-2; i--) res += scan[i];
    cout << res;
    return 0;
}