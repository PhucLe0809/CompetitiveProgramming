#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <bool> row(n+1), col(n+1);
    int x, y;
    vector <int> out;
    for (int i = 0; i < n*n; i++){
        cin >> x >> y;
        if (!row[x] && !col[y]){
            out.push_back(i+1); 
            row[x] = col[y] = true;
        }
    }
    for (auto &it:out) cout << it << " ";
    return 0;
}