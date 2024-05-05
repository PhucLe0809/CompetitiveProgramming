#include <bits/stdc++.h>
#define maxarray 305

using namespace std;
int n;
double dp[maxarray][maxarray][maxarray];

double calc(int x, int y, int z) {
    if (x < 0 || y < 0 || z < 0) return 0;
    if (x == 0 && y == 0 && z == 0) return 0;
    if (dp[x][y][z] > 0) return dp[x][y][z];
    double up = n + x * calc(x - 1, y, z) + y * calc(x + 1, y - 1, z) + z * calc(x, y + 1, z - 1); 
    return dp[x][y][z] = up/(x + y + z);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    int fre[3] = {0, 0, 0};
    int x;
    for (int i = 0; i < n; i++){
        cin >> x; fre[x-1]++;
    }
    memset(dp, -1, sizeof(dp));
    cout << fixed << setprecision(12) << calc(fre[0], fre[1], fre[2]) << '\n';
    return 0;
}
