#include <bits/stdc++.h>

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    deque <int> que;
    if (n % 2 == 0){
        for (int i = 0; i < n; i++){
            if (i % 2 == 0) que.push_back(inp[i]);
            else que.push_front(inp[i]);
        }
    }else{
        for (int i = 0; i < n; i++){
            if (i % 2 == 0) que.push_front(inp[i]);
            else que.push_back(inp[i]);
        }
    }
    while (que.size()){
        cout << que.front() << " ";
        que.pop_front();
    }
    return 0;
}