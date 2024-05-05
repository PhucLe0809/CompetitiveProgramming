#include <bits/stdc++.h>
#define maxarray 1005

using namespace std;
struct TRIE{
    struct Node{
        int child[26];
        int cnt, thend;
    } node[maxarray];

    int cur;
    TRIE () : cur(0){
        memset(node[0].child, -1, sizeof(node[0].child));
        node[0].cnt = node[0].thend = 0;
    }

    int new_node(){
        cur++;
        memset(node[cur].child, -1, sizeof(node[cur].child));
        node[cur].cnt = node[cur].thend = 0;
        return cur;
    }
    void add_string(string &str){
        int pos = 0;
        for (auto &it:str){
            int c = it - 'a';
            if (node[pos].child[c] == -1) node[pos].child[c] = new_node();
            pos = node[pos].child[c];
            node[pos].cnt++;
        }
        node[pos].thend++;
    }
    bool find_string(string &str){
        int pos = 0;
        for (auto &it:str){
            int c = it - 'a';
            if (node[pos].child[c] == -1) return false;
            pos = node[pos].child[c];
        }
        return (node[pos].thend != 0);
    }
    bool delete_string_recursive(int pos, string &str, int i){
        if (i != str.size()){
            int c = str[i] - 'a';
            bool deleted = delete_string_recursive(node[pos].child[c], str, i+1);
            if (deleted) node[pos].child[c] = -1;
        }else node[pos].thend--;

        if (pos != 0){
            node[pos].cnt--;
            if (node[pos].cnt == 0) return true;
        }
        return false;
    }
    void delete_string(string &str){
        if (!find_string(str)) return;
        delete_string_recursive(0, str, 0);
    }
    void dfs_string(int pos, string &cur_str, vector <string> &res){
        for (int i = 0; i < node[pos].thend; i++) res.push_back(cur_str);
        for (int i = 0; i < 26; i++){
            if (node[pos].child[i] == -1) continue;
            cur_str += char(i + 'a');
            dfs_string(node[pos].child[i], cur_str, res);
            cur_str.pop_back();
        }
    }
    vector<string> sort_string(){
        vector <string> res;
        string cur_str = "";
        dfs_string(0, cur_str, res);
        return res;
    }
    string find_kth_string(int k){
        int pos = 0;
        string res = "";
        while (true){
            if (node[pos].thend >= k) break;
            k -= node[pos].thend;
            for (int i = 0; i < 26; i++){
                if (node[pos].child[i] == -1) continue;
                int next = node[pos].child[i];
                if (node[next].cnt >= k){
                    res += char(i + 'a');
                    pos = next;
                    break;
                }
                k -= node[next].cnt;
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