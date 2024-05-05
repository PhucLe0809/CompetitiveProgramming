#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n, m; cin >> n >> m;
    char carpet[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> carpet[i][j];
        }
    }
    string pivot = "vika";
    int id = 0;
    for (int j = 0; j < m; j++){
        for (int i = 0; i < n; i++){
            if (carpet[i][j] == pivot[id]){
                id++; break;
            }
        }
    }
    if (id == (int)pivot.size()) cout << "YES\n"; else cout << "NO\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}