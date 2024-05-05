#include <bits/stdc++.h>

using namespace std; 
int32_t dx[5]={-1, 0, 1, 0};
int32_t dy[5]={0, -1, 0, 1};

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, m, x, y, z, t, a, b;
    int32_t u, v;
    while (test--){
        cin >> n >> m;
        cin >> x >> y >> z >> t;
        a = b = 0;
        for (int i = 0; i < 4; i++){
            u = x+dx[i]; v = y+dy[i];
            if (1<=u && u<=n && 1<=v && v<=m) a++;
        }
        for (int i = 0; i < 4; i++){
            u = z+dx[i]; v = t+dy[i];
            if (1<=u && u<=n && 1<=v && v<=m) b++;
        }
        cout << min(a, b) << '\n';
    }
    return 0;
}