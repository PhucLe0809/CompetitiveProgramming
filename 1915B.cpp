#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
// char matrix[5][5] = {{'A', 'B', 'C'}, {'C', 'A', 'B'}, {'B', 'C', 'A'}};

void solve(){
    char matrix[5][5];
    int x = -1, y = -1;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> matrix[i][j];
            if (matrix[i][j] == '?'){
                x = i; y = j;
            }
        }        
    }  
    vector <char> scan;
    for (int j = 0; j < 3; j++){
        if (matrix[x][j] != '?') scan.push_back(matrix[x][j] - 'A');
    }
    sort(scan.begin(), scan.end());
    if (scan[0] == 0 && scan[1] == 1) cout << 'C';
    if (scan[0] == 0 && scan[1] == 2) cout << 'B';
    if (scan[0] == 1 && scan[1] == 2) cout << 'A';
    cout<< endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        solve();
    }
    return 0;
}