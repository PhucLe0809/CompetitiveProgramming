#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    priority_queue <int> inp;
    int answer = 0, x, y;
    for (int i = 0; i < n; i++){
        cin >> x; inp.push(-x);
    }
    for (int i = 0; i < n-1; i++){
        x = inp.top(); inp.pop();
        y = inp.top(); inp.pop();
        answer += (x + y);
        inp.push(x + y);
    }
    cout << -answer;
    return 0;
}