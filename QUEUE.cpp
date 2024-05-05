#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    queue <int> que;
    while (test--){
        int t; cin >> t;
        if (t == 1){
            int n; cin >> n;
            que.push(n); continue;
        }
        if (t == 2){
            if (!que.empty()) que.pop();
            continue;
        }
        if (t == 3){
            if (!que.empty()) cout << que.front() << endl;
            else cout << "Empty!\n";
        }
    }
    return 0;
}