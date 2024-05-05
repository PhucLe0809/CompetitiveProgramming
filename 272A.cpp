#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int s, x; s = 0;
    for (int i = 0; i < n; i++){
        cin >> x; s += x;
    }
    int cnt = 0;
    for (int i = 1; i <= 5; i++){
        if ((s+i)%(n+1)!=1) cnt++;
    }
    cout << cnt;
    return 0;
}