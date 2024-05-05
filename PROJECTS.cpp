#include <bits/stdc++.h>
#define maxarray 30005

using namespace std; 
int32_t c[30], p[30];
vector <vector<int32_t>> scan(30,vector <int32_t> (maxarray, 0));

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, s; cin >> n >> s;
    for (int i = 1; i <= n; i++) cin >> c[i];
    for (int i = 1; i <= n; i++) cin >> p[i];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= s; j++){
            if (j<c[i]) scan[i][j]=scan[i-1][j-1];
            else scan[i][j]=max(scan[i-1][j-1], scan[i-1][j-c[i]]+p[i]);
        }
    }
    cout << scan[n][s];
    return 0;
}