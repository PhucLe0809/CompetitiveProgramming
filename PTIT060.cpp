#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k; cin >> n >> k;
    deque <int> que;
    for (int i = 0; i < n; i++){
        int x; cin >> x; que.push_back(x);
    }
    k %= n;
    while (k--) que.push_back(que.front()), que.pop_front();
    for (int i = 0; i < n; i++) cout << que[i] << " ";
    return 0;
}