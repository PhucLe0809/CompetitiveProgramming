#include <bits/stdc++.h>

using namespace std;

bool check(int row, string s){
    int col = 12/row, cnt = 0;
    int g[15][15];
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            g[i][j] = s[cnt];
            cnt++;
        }
    }
    for (int i = 0; i < col; i++){
        bool ok = true;
        for (int j = 0; j < row; j++){
            if (g[j][i]=='O') ok = false;
        }
        if (ok) return true;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    string str;
    while (n--){
        cin >> str;
        vector <int> answer;
        for (int i=1; i<=12; i++){
            if (12%i==0){
                if (check(i, str)){
                    answer.push_back(i);
                }
            }
        }
        cout << answer.size() << " ";
        for (auto &x:answer) cout << x << "x" << 12/x << " ";
        cout << '\n';
    }
    return 0;
}