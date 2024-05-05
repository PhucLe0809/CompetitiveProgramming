#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
vector <int64_t> bit(maxarray);

void update(vector <int64_t> &bit, int n, int pos, int val){
    while (pos <= n){
        bit[pos] += val;
        pos += (pos&(-pos));
    }
}
int64_t query(vector <int64_t> &bit, int pos){
    int64_t out = 0;
    while (pos > 0){
        out += bit[pos];
        pos -= (pos&(-pos));
    }
    return out;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> inp(n);
    set <int> scan;
    for (int i = 0; i < n; i++){
        cin >> inp[i]; scan.insert(inp[i]);
    }
    map <int, int> mp; int node = 0;
    for (auto &x:scan) mp[x] = ++node;
    int64_t answer = 0;
    for (int i = n-1; i >= 0; i--){
        int pos = mp[inp[i]];
        answer += query(bit, pos);
        update(bit, node, pos+1, 1);
    }
    cout << answer;
    return 0;
}