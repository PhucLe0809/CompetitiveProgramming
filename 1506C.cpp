#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    string str, ansi;
    int n, m, i, j, answer;
    while (test--){
        cin >> str >> ansi;
        n = str.size(); m = ansi.size();
        answer = 0;
        //cccbac
        //ccb
        for (int t = 0; t < m; t++){
            i = 0;
            while (i<n){
                j = t;
                if (str[i]!=ansi[j]){
                    i++; continue;
                }
                while (j<m && str[i]==ansi[j]){
                    i++; j++;
                }
                answer = max(answer, j-t);
            }
        }
        for (int t = 0; t < m; t++){
            i = t;
            while (i<n){
                j = 0;
                if (str[i]!=ansi[j]){
                    i++; continue;
                }
                while (j<m && str[i]==ansi[j]){
                    i++; j++;
                }
                answer = max(answer, j);
            }
        }
        cout << (n+m)-2*answer << '\n';
    }
    return 0;
}