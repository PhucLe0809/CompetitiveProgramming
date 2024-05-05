#include <bits/stdc++.h>

using namespace std;
char scan[55][55];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> scan[i][j];
        }
    }
    int cnt = 0;
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < m-1; j++){
            map <char, int> mp;
            mp[scan[i][j]]++;
            mp[scan[i][j+1]]++;
            mp[scan[i+1][j]]++;
            mp[scan[i+1][j+1]]++;
            if (mp['f'] && mp['a'] && mp['c'] && mp['e']){
                cnt++;
            }
        }
    }
    cout << cnt;    
    return 0;
}