#include <bits/stdc++.h>

using namespace std;
struct TRIE{
    struct Node{
        Node* child[26][26];
        int cnt;

        Node(){
            for (int i = 0; i < 26; i++){
                for (int j = 0; j < 26; j++){
                    child[i][j] = nullptr;
                }
            }
            cnt = 0;
        }
    };
    int cur;
    Node* root;
    TRIE () : cur(0){
        root = new Node();
    }
    void add_string(string &str){
        Node* pos = root;
        int n = str.size();
        for (int i = 0; i < str.size(); i++){
            int a = str[i] - 'a';
            int b = str[n - i - 1] - 'a';
            if (pos->child[a][b] == nullptr) pos->child[a][b] = new Node();
            pos = pos->child[a][b];
            pos->cnt++;
        }
    }
    int64_t sqr(int64_t x){ return x*x; }
    int64_t query(Node* pos, int64_t depth){
        int64_t res = (pos == root)?(0):((pos->cnt/2)*(sqr(depth) - sqr(depth-1))); // weight u -> v
        for (int i = 0; i < 26; i++){
            for (int j = 0; j < 26; j++){
                if (pos->child[i][j] == nullptr) continue;
                res += query(pos->child[i][j], depth+1);
            }
        }
        return res;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        TRIE tree;
        string str;
        for (int i = 0; i < n; i++){
            cin >> str; tree.add_string(str);
        }
        cout << tree.query(tree.root, 0) << '\n';
    }
    return 0;
}