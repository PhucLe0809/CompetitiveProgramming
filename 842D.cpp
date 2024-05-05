#include <bits/stdc++.h>
#define log2n 19

using namespace std;
struct TRIE{
    struct Node{
        Node* child[2];
        int cnt;

        Node(){
            for (int i = 0; i < 2; i++) child[i] = nullptr;
            cnt = 0;
        }
    };
    int cur;
    Node* root;
    TRIE () : cur(0){
        root = new Node();
    }

    void add_number(int x){
        Node* pos = root;
        for (int i = log2n; i >= 0; i--){
            int c = (x >> i) & 1;
            if (pos->child[c] == nullptr) pos->child[c] = new Node();
            pos = pos->child[c];
            pos->cnt++;
        }
    }
    int query(int x){
        Node* pos = root; int res = 0;
        for (int i = log2n; i >= 0; i--){
            int c = (x >> i) & 1;
            if (pos->child[c] != nullptr && pos->child[c]->cnt == (1 << i)){
                pos = pos->child[c^1];
                res += (1 << i);
            }else pos = pos->child[c];
            if (pos == nullptr) break;
        }
        return res;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    set <int> inp; int x;
    for (int i = 0; i < n; i++){
        cin >> x; inp.insert(x);
    }
    TRIE tree;
    for (auto &it:inp) tree.add_number(it);
    int numxor = 0;
    while (m--){
        cin >> x;
        numxor ^= x;
        cout << tree.query(numxor) << '\n';
    }
    return 0;
}