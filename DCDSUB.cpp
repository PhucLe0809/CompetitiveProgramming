#include <bits/stdc++.h>
#define maxarray 1005

using namespace std; 
int32_t depth, maxdepth;
int32_t len[maxarray], inp[maxarray];
vector <vector<int32_t>> scan(maxarray);

bool pandr(string str){
    string ansi = str;
    reverse(ansi.begin(), ansi.end());
    if (ansi==str) return true;
    else return false;
}

void DFS(int32_t v){
    depth++;
    maxdepth = max(maxdepth, depth);
    for (auto it:scan[v]){
        if (inp[it] > inp[v]) DFS(it);
    }
    depth--;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    // ifstream finp ("inp.inp");
    int32_t n; cin >> n;
    // finp >> n;
    for (int i = 1; i <= n; i++) cin >> inp[i];
    int32_t maxlen = 1;
    len[1] = 1;
    for (int i = 2; i <= n; i++){
        len[i] = 1;
        for (int j = 1; j < i; j++){
            if (inp[j]<inp[i] && len[j]+1>len[i]){
                len[i] = len[j]+1;
            }
        }
        maxlen = max(maxlen, len[i]);
    }
    for (int i = 1; i < n; i++){
        for (int j = i+1; j <= n; j++){
            if (pandr(to_string(inp[i]+inp[j]))){
                // cout << to_string(inp[i]+inp[j]) << '\n';
                scan[i].push_back(j);
            }
        }
    }
    maxdepth = 0;
    for (int u = 1; u <= n; u++){
        if (!scan[u].empty()){
            depth = 0;
            DFS(u);
        }
    }
    // cout << maxlen << " " << maxdepth << endl;
    if (maxdepth==0 || min(maxlen, maxdepth)<2) cout << -1;
    else cout << min(maxlen, maxdepth);
    return 0;
}