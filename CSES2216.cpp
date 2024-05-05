#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> ind(n+1);
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        ind[x] = i;
    }
    int cnt = 1, thend = 0;
    for (int i = 1; i <= n; i++){
        if (thend > ind[i]) cnt++;
        thend = ind[i];
    }
    cout << cnt;
    return 0;
}