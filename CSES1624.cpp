#include <bits/stdc++.h>

using namespace std;
int answer = 0;
int inp[9][9], scan[9];

bool check(int row, int col){
    for (int i = 1; i < row; i++){
        if (scan[i] == col || abs(i - row) == abs(scan[i] - col)){
            return false;
        }
    }
    return true;
}
void try_queen(int i, int n){
    for (int j = 1; j <= n; j++){
        if (check(i, j) && inp[i][j]){
            scan[i] = j;
            if (i == n){
                answer++; return;
            }
            try_queen(i+1, n);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    for (int i = 1; i <= 8; i++){
        for (int j = 1; j <= 8; j++){
            char key; cin >> key;
            if (key == '.') inp[i][j] = 1;
            else inp[i][j] = 0;
        }
    }
    try_queen(1, 8);
    cout << answer;
    return 0;
}