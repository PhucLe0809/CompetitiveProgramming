#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    vector <int> inp(n+5);
    for (int i = 1; i <= n; i++) cin >> inp[i];
    int cnt = 0;
    int dis, j;
    for (int i = 1; i <= n; i++){
        if (inp[i]==1){
            dis = i - m;
            j = m - dis;
            if (j<1 || j>n || inp[i]==inp[j]){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}