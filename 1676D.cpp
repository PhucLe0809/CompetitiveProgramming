#include <bits/stdc++.h>

using namespace std;
int chess[205][205], scan[205][205];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, m; 
    while (test--){
        cin >> n >> m;
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= m; j++){
                cin >> chess[i][j];
                scan[i][j] = 0;
            }
        }
        int s, x, y;
        for (int i = 1; i <= n; i++){
            s = 0;
            for (int j = 1; j <= m; j++){
                x=i+j-1; y=j;
                if (1<=x && x<=n && 1<=y && y<=m){
                    s += chess[x][y];
                }else break;
            }
            for (int j = 1; j <= m; j++){
                x=i+j-1; y=j;
                if (1<=x && x<=n && 1<=y && y<=m){
                    scan[x][y] += s;
                }else break;
            }
        }
        for (int j = 2; j <= m; j++){
            s = 0;
            for (int i = 1; i <= n; i++){
                x=i; y=j+i-1;
                if (1<=x && x<=n && 1<=y && y<=m){
                    s += chess[x][y];
                }else break;
            }
            for (int i = 1; i <= n; i++){
                x=i; y=j+i-1;
                if (1<=x && x<=n && 1<=y && y<=m){
                    scan[x][y] += s;
                }else break;
            }
        }
        for (int i = 1; i <= n; i++){
            s = 0;
            for (int j = m; j >= 1; j--){
                x=i+(m-j); y=j;
                if (1<=x && x<=n && 1<=y && y<=m){
                    s += chess[x][y];
                }else break;
            }
            for (int j = m; j >= 1; j--){
                x=i+(m-j); y=j;
                if (1<=x && x<=n && 1<=y && y<=m){
                    scan[x][y] += s;
                    scan[x][y] -= chess[x][y];
                }else break;
            }
        }
        for (int j = m-1; j >= 1; j--){
            s = 0;
            for (int i = 1; i <= n; i++){
                x=i; y=j-i+1;
                if (1<=x && x<=n && 1<=y && y<=m){
                    s += chess[x][y];
                }else break;
            }
            for (int i = 1; i <= n; i++){
                x=i; y=j-i+1;
                if (1<=x && x<=n && 1<=y && y<=m){
                    scan[x][y] += s;
                    scan[x][y] -= chess[x][y];
                }else break;
            }
        }
        int answer = 0;
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= m; j++){
                answer = max(answer, scan[i][j]);
            }
        }
        cout << answer << '\n';
    }
    return 0;
}