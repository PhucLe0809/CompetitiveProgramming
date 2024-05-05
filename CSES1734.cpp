#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
int inp[maxarray], bit[maxarray];

void update(int pos, int value){
    for ( ; pos < maxarray; pos += (pos&(-pos))) bit[pos] += value;
}
int get(int pos){
    int out = 0;
    for ( ; pos > 0; pos -= (pos&(-pos))) out += bit[pos];
    return out;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, q; cin >> n >> q;
    for (int i = 1; i <= n; i++){
        cin >> inp[i];
    }
    vector <vector<pair<int, int>>> query(n+1);
    for (int i = 0; i < q; i++){
        int a, b; cin >> a >> b;
        query[a].push_back({b, i});
    }
    map <int, int> right;
    vector <int> answer(q);
    for (int i = n; i > 0; i--){
        if (right[inp[i]] != 0) update(right[inp[i]], -1);
        right[inp[i]] = i;
        update(right[inp[i]], 1);
        for (auto &it:query[i]){
            answer[it.second] = get(it.first);
        }
    }
    for (auto &it:answer) cout << it << "\n";
    return 0;
}