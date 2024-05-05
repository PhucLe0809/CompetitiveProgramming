#pragma GCC target ("avx2")
#pragma GCC optimize ("03")
#pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 300005

using namespace std;
int inp[maxarray], deg[maxarray];
int mil[maxarray], mir[maxarray], mxl[maxarray], mxr[maxarray];
vector <vector<int>> graph(maxarray);

void GOTOHANOI(){
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> inp[i];

    for (int i = 1; i < n; i++){
        graph[i].push_back(i+1);
    }

    deque <int> dq;

    dq.clear(); inp[0] = LONG_MAX; dq.push_back(0);
    for (int i = 1; i <= n; i++){
        while (!dq.empty() && inp[dq.back()] <= inp[i]) dq.pop_back();
        mil[i] = dq.back(); dq.push_back(i);
    }
    dq.clear(); inp[n+1] = LONG_MAX; dq.push_back(n+1);
    for (int i = n; i >= 1; i--){
        while (!dq.empty() && inp[dq.back()] <= inp[i]) dq.pop_back();
        mir[i] = dq.back(); dq.push_back(i);
    }

    dq.clear(); inp[0] = LONG_MIN; dq.push_back(0);
    for (int i = 1; i <= n; i++){
        while (!dq.empty() && inp[dq.back()] >= inp[i]) dq.pop_back();
        mxl[i] = dq.back(); dq.push_back(i);
    }
    dq.clear(); inp[n+1] = LONG_MIN; dq.push_back(n+1);
    for (int i = n; i >= 1; i--){
        while (!dq.empty() && inp[dq.back()] >= inp[i]) dq.pop_back();
        mxr[i] = dq.back(); dq.push_back(i);
    }

    for (int i = 1; i <= n; i++) graph[mil[i]].push_back(mir[i]);
    for (int i = 1; i <= n; i++) graph[mxl[i]].push_back(mxr[i]);
    queue <int> que;
    vector <bool> visited(n+1, false);
    que.push(1); visited[1] = true; deg[1] = 1;
    while (!que.empty() && !deg[n]){
        int u = que.front(); que.pop();
        for (auto &v:graph[u]){
            if (!visited[v]){
                que.push(v);
                visited[v] = true;
                deg[v] = deg[u] + 1;
            }
        }
    }

    cout << deg[n] - 1 << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int test = 1; // cin >> test;
    while (test--){
        GOTOHANOI();
    }

    return 0;
}