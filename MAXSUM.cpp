#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int answer = 0, sum = 0;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        sum = max(sum + x, x);
        answer = max(answer, sum);
    }
    cout << answer;
    return 0;
}