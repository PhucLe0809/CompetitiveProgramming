#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
bool tick[3][3];
int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[8] = {0, -1, -1, -1, 0, 1, 1, 1};

void gen(char matrix[3][3], int k, int i, int j, string &str, string &answer){
    for (int t = 0; t < 8; t++){
        int x = i + dx[t];
        int y = j + dy[t];
        if (x >= 0 && x < 3 && y >= 0 && y < 3){
            if (!tick[x][y]){
                tick[x][y] = true;
                str += matrix[x][y];
                if (k == 3LL) answer = min(answer, str);
                else gen(matrix, k+1, x, y, str, answer);
                tick[x][y] = false;
                str.pop_back();
            }
        }
    }
}

void GOTOHANOI(){
    char matrix[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> matrix[i][j];
        }
    }
    string answer = "CCC";
    memset(tick, false, sizeof(tick));
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            string str; str += matrix[i][j];
            tick[i][j] = true;
            gen(matrix, 2, i, j, str, answer);
            tick[i][j] = false;
        }
    }
    cout << answer;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1; // cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}