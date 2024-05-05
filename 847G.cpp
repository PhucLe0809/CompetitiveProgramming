#include <bits/stdc++.h>

using namespace std;
char inp[1005][9];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 7; j++){
            cin >> inp[i][j];
        }
    }
    int m = 0;
    int cnt;
    for (int i = 0; i < 7; i++){
        cnt = 0;
        for (int j = 0; j < n; j++){
            cnt += (inp[j][i]-'0');
        }
        m = max(m, cnt);
    }
    cout << m;
    return 0;
}