#include <bits/stdc++.h>

using namespace std;
struct TRIE{
    struct Node{
        Node* child[26];
        int cnt, thend;

        Node(){
            for (int i = 0; i < 26; i++) child[i] = nullptr;
            cnt = thend = 0;
        }
    };

    int cur;
    Node* root;
    TRIE () : cur(0){
        root = new Node();
    }

    void add_string(string &str){
        Node* pos = root;
        for (auto &it:str){
            int c = it - 'a';
            if (pos->child[c] == nullptr) pos->child[c] = new Node();
            pos = pos->child[c];
            pos->cnt++;
        }
        pos->thend++;
    }
    bool find_string(string &str){
        Node* pos = root;
        for (auto &it:str){
            int c = it - 'a';
            if (pos->child[c] == nullptr) return false;
            pos = pos->child[c];
        }
        return (pos->thend != 0);
    }
    bool delete_string_recursive(Node* pos, string &str, int i){
        if (i != str.size()){
            int c = str[i] - 'a';
            bool deleted = delete_string_recursive(pos->child[c], str, i+1);
            if (deleted) pos->child[c] = nullptr;
        }else pos->thend--;

        if (pos != root){
            pos->cnt--;
            if (pos->cnt == 0){
                delete(pos); return true;
            }
        }
        return false;
    }
    void delete_string(string &str){
        if (!find_string(str)) return;
        delete_string_recursive(root, str, 0);
    }
    void dfs_string(Node* pos, string &cur_str, vector <string> &res){
        for (int i = 0; i < pos->thend; i++) res.push_back(cur_str);

        for (int i = 0; i < 26; i++){
            if (pos->child[i] == nullptr) continue;
            cur_str += char(i + 'a');
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
    string find_kth_string(int k){
        Node* pos = root;
        string res = "";
        while (true){
            if (pos->thend >= k) break;
            k -= pos->thend;
            for (int i = 0; i < 26; i++){
                if (pos->child[i] == nullptr) continue;
                Node* next = pos->child[i];
                if (next->cnt >= k){
                    res += char(i + 'a');
                    pos = next;
                    break;
                }
                k -= next->cnt;
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
    int t; string str;
    while (q--){
        cin >> t >> str;
        if (t == 1) tree.add_string(str);
        if (t == 2) tree.delete_string(str);
    }
    vector <string> answer = tree.sort_string();
    for (auto &it:answer) cout << it << '\n';
    cout << tree.find_kth_string(2);
    return 0;
}