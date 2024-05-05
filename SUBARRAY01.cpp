#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; int64_t x; cin >> n >> x;
    vector <int64_t> inp(n+1), prefix(n+1);
    for (int i = 1; i <= n; i++){
        cin >> inp[i];
        prefix[i] = prefix[i-1] + inp[i];
    }
    int cnt = 0, j = 0;
    for (int i = 1; i <= n; i++){
        if (prefix[i] < x) continue;
        while (prefix[j] < prefix[i]-x) j++;
        if (prefix[i] - prefix[j] == x) cnt++;
    }
    cout << cnt;
    return 0;
}