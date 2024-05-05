#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    char chess[9][9];
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            cin >> chess[i][j];
        }
    }
    bool check = true;
    for (int i = 0; i < 8 && check; i++){
        for (int j = 1; j < 8 && check; j++){
            if (chess[i][j]==chess[i][j-1]) check = false;
        }
    }
    if (check) cout << "YES\n"; else cout << "NO\n";
    return 0;
}