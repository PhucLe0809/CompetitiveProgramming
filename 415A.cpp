#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    vector <int> out(n, 0);
    int x;
    for (int i = 0; i < m; i++){
        cin >> x;
        for (int j = x-1; j < n; j++){
            if (out[j]==0) out[j]=x;
        }
    }
    for (auto x:out) cout << x << " ";
    return 0;
}