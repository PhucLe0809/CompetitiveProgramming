#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    map <int, int> a, b;
    int x;
    for (int i = 0; i < n; i++){
        cin >> x; a[x]++;
    }
    for (int i = 0; i < n; i++){
        cin >> x; b[x]++;
    }
    int cnt = 0; bool check = true;
    for (int i = 1; i<=5 && check; i++){
        check = ((a[i]+b[i])%2==0);
        cnt += max(a[i], b[i]) - (a[i]+b[i])/2;
    }
    if (check) cout << cnt/2;
    else cout << -1;
    return 0;
}