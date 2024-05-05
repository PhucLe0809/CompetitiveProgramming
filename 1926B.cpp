// #pragma GCC optimize("Ofast")
// #pragma GCC optimize ("unroll-loops")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#include <bits/stdc++.h>
#define int long long
#define inf LLONG_MAX
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    vector <vector<int>> matrix(n, vector<int>(n));
    int x, y, z, t; x = y = -1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            char key; cin >> key;
            matrix[i][j] = (int)(key == '1');
            if (matrix[i][j] == 1){
                if (x == -1){
                    x = i; y = j;
                }else{
                    z = i; t = j;
                }
            }
        }
    }

    bool flag = true;
    for (int i = x; i <= z && flag; i++){
        for (int j = y; j <= t && flag; j++){
            flag = (matrix[i][j] == 1);
        }
    }
    if (flag) cout << "SQUARE\n"; else cout << "TRIANGLE\n";
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