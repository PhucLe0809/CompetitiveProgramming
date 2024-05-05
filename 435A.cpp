#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    queue <int> que; int x;
    for (int i = 0; i < n; i++){
        cin >> x; que.push(x);
    }
    int tmp, cnt = 0;
    while (!que.empty()){
        tmp = 0;
        while (!que.empty() && tmp+que.front()<=m){
            tmp += que.front(); que.pop();
        }
        if (tmp) cnt++;
    }
    cout << cnt;
    return 0;
}