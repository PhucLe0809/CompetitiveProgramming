#include <bits/stdc++.h>

using namespace std;
char arr[105][1005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, m, x, y;
    int answer, cnt;
    while (test--){
        cin >> n >> m >> x >> y;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> arr[i][j];
            }
            if (arr[i][m-1]=='.') arr[i][m] = '*';
            else arr[i][m] = '.';
        }
        answer = 0;
        for (int i = 0; i < n; i++){
            cnt = 0;
            for (int j = 0; j <= m; j++){
                if (arr[i][j]=='.') cnt++;
                else{
                    if (cnt==1) answer += x;
                    else{
                        if (2*x<=y) answer += x*cnt;
                        else answer += ((cnt%2)*x+(cnt/2)*y);
                    }
                    cnt = 0;
                }
            }
        }
        cout << answer << '\n';
    }
    return 0;
}