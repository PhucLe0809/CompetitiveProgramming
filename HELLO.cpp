#include <bits/stdc++.h>

using namespace std;

signed main(){
    string str; cin >> str;
    string pivot = "hello";
    int n = str.size(), i = 0;
    int m = pivot.size(), j = 0;
    while (i < n && j < m){
        if (str[i] == pivot[j]){
            j++;
            if (j == m){
                cout << "YES"; return 0;
            }
        }
        i++;
    }
    cout << "NO";
}