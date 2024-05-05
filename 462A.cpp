#include <bits/stdc++.h>

using namespace std;
int dx[]={-1, 0, 1, 0};
int dy[]={0, -1, 0, 1};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    char inp[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> inp[i][j];
        }
    }
    bool check = true;
    int x, y, cnt;
    for (int i = 0; i<n && check; i++){
        for (int j = 0; j<n && check; j++){
            cnt = 0;
            for (int t = 0; t < 4; t++){
                x=i+dx[t]; y=j+dy[t];
                if (0<=x && x<n && 0<=y && y<n){
                    if (inp[x][y]=='o') cnt++;
                }
            }
            if (cnt%2!=0) check = false;
        }
    }
    if (check) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}