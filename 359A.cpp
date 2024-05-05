#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    int answer = 4;
    int x;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> x;
            if (x==1){
                if (i==1||i==n||j==1||j==m) answer = min(answer, 2);
            }
        }
    }
    cout << answer;
    return 0;
}