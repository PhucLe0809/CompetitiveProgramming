#include <bits/stdc++.h>
#define maxarray 100005
#define log2n 18

using namespace std;
struct TRIE{
    struct Node{
        Node* child[2];
        int minn;

        Node(){
            for (int i = 0; i < 2; i++) child[i] = nullptr;
            minn = INT_MAX;
        }
    };

    int cur;
    Node* root;
    TRIE() : cur(0){ root = new Node(); }

    void add_number(int x){
        Node* p = root;
        for (int i = log2n; i >= 0; i--){
            int c = (x >> i) & 1;
            if (p->child[c] == nullptr) p->child[c] = new Node();
            p = p->child[c];
            p->minn = min(p->minn, x);
        }
    }
    int query(int x, int val){
        Node* p = root; int res = 0;
        for (int i = log2n; i >= 0; i--){
            int c = (x >> i) & 1;
            if (p->child[c^1] != nullptr && p->child[c^1]->minn <= val){
                res += ((c^1) << i);
                p = p->child[c^1];
            }else{
                if (p->child[c] == nullptr || p->child[c]->minn > val) return -1;
                p = p->child[c];
                res += (c << i);
            }
        }
        return res;
    }
};
vector <vector<int>> d(maxarray);
TRIE trie[maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    for (int i = 1; i < maxarray; i++){
        for (int j = i; j < maxarray; j += i){
            d[j].push_back(i);
        }
    }
    int q; cin >> q;
    int t, u, x, k, s;
    while (q--){
        cin >> t;
        if (t == 1){
            cin >> u;
            for (auto &it:d[u]) trie[it].add_number(u);
        }
        if (t == 2){
            cin >> x >> k >> s;
            if (x % k != 0) cout << "-1\n";
            else cout << trie[k].query(x, s-x) << '\n';
        }
    }
    return 0;
}