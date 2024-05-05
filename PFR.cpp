#include <bits/stdc++.h>
#define MOD 1000000007
#define limit 100005

using namespace std;
int element, dis;
int64_t invs[limit];
vector <bool> visited(limit, false);
vector <int> father(limit), save;
vector <vector<int>> scan;
vector <vector<int>> graph(limit), inp(limit);
stack <int> sta;

void precal(int64_t n){
    invs[0] = invs[1] = 1;
    for (int64_t x = 2; x <= n; x++){
        /// n^(-1)  = floor(MOD / n) * (MOD % x)^(-1)
        invs[x] = MOD - 1LL*(MOD/x)*invs[MOD%x] % MOD;
    }
}

void DFS(int v, int root){
    visited[v] = true;
    father[v] = root;
    sta.push(v); 
    for (auto &x:graph[v]){
        if (!visited[x]){
            DFS(x, root);
        }else{
            if (sta.empty() || father[v]!=father[x]) continue;
            while (!sta.empty() && sta.top()!=x){
                // cout << sta.top() << " ";
                save.push_back(sta.top());
                sta.pop(); element++;
            }
            // cout << sta.top() << " "; 
            save.push_back(sta.top());
            sta.pop(); element++;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int x;
    for (int i = 1; i <= n; i++){
        cin >> x; graph[i].push_back(x);
        inp[i].push_back(x);
        inp[x].push_back(i);
        father[i] = i;
    }
    vector <int64_t> lcm;
    for (int u = 1; u <= n; u++){
        if (!visited[u]){
            while (!sta.empty()) sta.pop();
            element = 0; save.clear();
            DFS(u, u);
            scan.push_back(save);
            if (element!=0) lcm.push_back(1LL*element);
            // cout << element << '\n';
        }
    }
    vector <int> dis; 
    pair <int, int> v;
    fill(visited.begin(), visited.end(), false);
    for (int i = 0; i < scan.size(); i++){
        queue <pair<int, int>> q;
        for (auto &x:scan[i]){
            q.push({x, 0}); visited[x] = true;
        }
        dis.push_back(0);
        while (!q.empty()){
            v = q.front(); q.pop();
            for (auto &x:inp[v.first]){
                if (!visited[x]){
                    visited[x] = true;
                    q.push({x, v.second+1});
                    dis[i] = max(dis[i], v.second+1);
                }
            }
        }
    }
    // for (auto &x:dis) cout << x << " "; cout << '\n';
    int64_t res = 0;
    for (auto &x:dis) res += (1LL*x);
    if (lcm.size()==1){
        cout << lcm[0]+res << '\n'; return 0;
    }
    precal(limit-1);
    int64_t answer = (((lcm[0]*lcm[1])%MOD)*(invs[__gcd(lcm[0], lcm[1])])) % MOD;
    if (answer < 0) answer += MOD;
    for (int i = 2; i < lcm.size(); i++){
        answer = (((answer*lcm[i])%MOD)*(invs[__gcd(answer, lcm[i])])) % MOD;
        if (answer < 0) answer += MOD;
    }
    answer = (answer + res) % MOD;
    if (answer < 0) answer += MOD;
    cout << answer << '\n';
    return 0;
}