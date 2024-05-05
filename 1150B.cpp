#include <bits/stdc++.h>

using namespace std;
int dx[]={1, 1, 1, 2};
int dy[]={-1, 0, 1, 0};
char inp[55][55];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> inp[i][j];
        }
    }
    bool check = true;
    int x, y;
    for (int i = 0; i<n && check; i++){
        for (int j = 0; j<n && check; j++){
            if (inp[i][j]=='.'){
                for (int t = 0; t<4 && check; t++){
                    x = i+dx[t]; y = j+dy[t];
                    if (0<=x && x<n && 0<=y && y<n){
                        if (inp[x][y]!='.') check = false;
                        else inp[x][y]='0';
                    }else check = false;
                }
            }
        }
    }
    if (check) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}