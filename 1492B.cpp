#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    vector <int> out; int nxt = n, id = n;
    priority_queue <int, vector<int>> que;
    for (int i = n-1; i >= 0; i--){
        int x = inp[i];
        if (x != nxt) continue;
        for (int j = i; j < id; j++){
            out.push_back(inp[j]);
            que.push(inp[j]);
        }
        int temp = nxt;
        while (!que.empty() && que.top() == temp){
            temp--; que.pop();
        }
        nxt = temp; id = i;
    }
    for (auto &it:out) cout << it << " "; cout << endl;
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