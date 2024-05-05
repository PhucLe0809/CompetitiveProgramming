#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, x; cin >> n >> x;
    int a, b;
    vector <int> one(n), two(n);
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        one[i] = min(a, b);
        two[i] = max(a, b);
    }
    a = *max_element(one.begin(), one.end());
    b = *min_element(two.begin(), two.end());
    if (a > b) cout << -1;
    else if (a<=x && x<=b) cout << 0; else cout << min(abs(x-a), abs(x-b));
    return 0;
}