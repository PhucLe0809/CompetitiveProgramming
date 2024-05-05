#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int f, s, g, u, d; cin >> f >> s >> g >> u >> d;
    vector <int> step(f+1);
    queue <int> q;
    q.push(s); step[s] = 1;
    int v;
    while (q.size()){
        v = q.front(); q.pop();
        if (v+u<=f && !step[v+u]){
            q.push(v+u); step[v+u] = step[v]+1;
        }
        if (v-d>=1 && !step[v-d]){
            q.push(v-d); step[v-d] = step[v]+1;
        }
    }
    if (step[g]==0) cout << "use the stairs";
    else cout << step[g]-1;
    return 0;
}