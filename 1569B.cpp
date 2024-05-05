#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, j; bool check;
    string str; char scan[55][55];
    while (test--){
        cin >> n >> str;
        vector <int> id;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (i==j) scan[i][j]='X';
                else scan[i][j]='=';
            }
            if (str[i]=='1') id.push_back(i);
        }
        sort(id.begin(), id.end());
        check = true;
        for (int i = 0; i<n && check; i++){
            if (str[i]=='2'){
                j = 0;
                while ((j<n) && (scan[i][j]=='X' || scan[i][j]=='+' || scan[i][j]=='-'
                || binary_search(id.begin(), id.end(), j))) j++;
                if (j<n){
                    scan[i][j]='+'; scan[j][i]='-';
                }else check = false;
            }
        }
        if (!check) cout << "NO\n";
        else{
            cout << "YES\n";
            for (int i = 0; i < n; i++){
                for (int j = 0; j < n; j++){
                    cout << scan[i][j];
                } cout << '\n';
            }
        }
    }
    return 0;
}