#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int answer = 0, prefix = 0;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        answer += x * prefix;
        prefix += x;
    }
    cout << answer;
    return 0;
}