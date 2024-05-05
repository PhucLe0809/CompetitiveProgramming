#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, a, b, c; cin >> n >> a >> b >> c;
    int answer = min(n-1, 1)*min(a, b)+max(n-2, 0)*min({a, b, c});
    cout << answer;
    return 0;
}