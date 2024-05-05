#include <bits/stdc++.h>
#define log2n 30

using namespace std;
struct TRIE{
    struct Node{
        Node* child[2];
        int cnt, thend;

        Node(){
            for (int i = 0; i < 2; i++) child[i] = nullptr;
            cnt = thend = 0;
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
        pos->thend++;
    }
    bool find_number(int x){
        Node* pos = root;
        for (int i = log2n; i >= 0; i--){
            int c = (x & (1 << i))?(1):(0);
            if (pos->child[c] == nullptr) return false;
            pos = pos->child[c];
        }
        return (pos->thend != 0);
    }
    void delete_number(int x){
        if (!find_number(x)) return;
        Node* pos = root;
        for (int i = log2n; i >= 0; i--){
            int c = (x >> i) & 1;
            Node* tmp = pos->child[c];
            tmp->cnt--;
            if (tmp->cnt == 0){
                delete(tmp);
                return;
            }
            pos = tmp;
        }
        pos->thend--;
    }
    void dfs_string(Node* pos, string &cur_str, vector <string> &res){
        for (int i = 0; i < pos->thend; i++) res.push_back(cur_str);

        for (int i = 0; i < 2; i++){
            if (pos->child[i] == nullptr) continue;
            cur_str += char(i + '0');
            dfs_string(pos->child[i], cur_str, res);
            cur_str.pop_back();
        }
    }
    vector<string> sort_string(){
        vector <string> res;
        string cur_str = "";
        dfs_string(root, cur_str, res);
        return res;
    }
    int query(int x){
        Node* pos = root;
        int res = 0;
        for (int i = log2n; i >= 0; i--){
            int c = (x >> i) & 1;
            if (pos->child[c^1] != nullptr){
                res += (1 << i);
                pos = pos->child[c^1];
            }else{
                pos = pos->child[c];
            }
        }
        return res;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int q; cin >> q;
    TRIE tree;
    int t, n;
    while (q--){
        cin >> t >> n;
        if (t == 1) tree.add_number(n);
        if (t == 2) tree.delete_number(n);
    }
    vector <string> answer = tree.sort_string();
    for (auto &it:answer) cout << it << '\n';
    cout << tree.query(1);
    return 0;
}