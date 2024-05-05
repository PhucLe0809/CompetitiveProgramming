#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int x, y, n; cin >> x >> y >> n;
    deque <int> que; que.push_front(y);
    for (int i = 1; i <= n-2; i++){
        que.push_front(que.front() - i);
    }
    if (que.front() - x > n-2){
        cout << x << " ";
        for (auto &it:que) cout << it << " ";
    }else cout << "-1";
    cout << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}