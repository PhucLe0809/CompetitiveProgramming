#include <bits/stdc++.h>
#define maxarray 100005
#define alphabet 26
#define log2n 30

using namespace std;
struct TRIE{
    struct Node{
        int child[alphabet];
        int cnt, thend;
    } node[maxarray];

    int cur;
    TRIE (): cur(0){
        memset(node[0].child, -1, sizeof(node[0].child));
        node[0].cnt = node[0].thend = 0;
    }
    void new_node(){
        cur++;
        memset(node[cur].child, -1, sizeof(node[cur].child));
        node[cur].cnt = node[cur].thend = 0;
    }
    void add_string(string &str){
        int pos = 0;
        for (auto &p:str){
            int c = p - 'a';
            if (node[pos].child[c] == -1) new_node();
            pos = node[pos].child[c];
            node[pos].cnt++;
        }
        node[pos].thend++;
    }
    bool find_string(string &str){
        int pos = 0;
        for (auto &p:str){
            int c = p - 'a';
            if (node[pos].child[c] == -1) return false;
            pos = node[pos].child[c];
        }
        return (node[pos].thend != 0);
    }
    bool delete_string_recursive(int pos, string &str, int i){
        if (i != str.size()){
            int c = str[i] - 'a';
            bool is_deleted = delete_string_recursive(node[pos].child[c], str, i+1);
            if (is_deleted) node[pos].child[c] = -1;
        }else node[pos].thend--;
        if (pos != 0){
            node[pos].cnt--;
            if (node[pos].cnt == 0) return true;
        }
        else return false;
    }
    void delete_string(string &str){
        if (find_string(str) == false) return;
        delete_string_recursive(0, str, 0);
    }
    void dfs(int pos, string &str, vector <string> &answer){
        for (int i = 0; i < node[pos].thend; i++) answer.push_back(str);
        for (int c = 0; c < alphabet; c++){
            if (node[pos].child[c] != -1){
                str += char(c + 'a');
                dfs(node[pos].child[c], str, answer);
                str.pop_back();
            }
        }
    }
    vector<string> sort_string(){
        vector <string> answer;
        string str = "";
        dfs(0, str, answer);
        return answer;
    }
    string find_kth_string(int k){
        int pos = 0;
        string answer = "";
        while (true){
            if (node[pos].thend >= k) break;
            k -= node[pos].thend;
            for (int c = 0; c < alphabet; c++){
                if (node[pos].child[c] != -1){
                    int next = node[pos].child[c];
                    if (node[next].cnt >= k){
                        answer += char(c + 'a');
                        pos = next;
                        break;
                    }
                    k -= node[next].cnt;
                }
            }
        }
        return answer;
    }

    void add_number(int &num){
        int pos = 0;
        for (int i = log2n; i >= 0; i--){
            int c = (num >> i) & 1;
            if (node[pos].child[c] == -1) new_node();
            pos = node[pos].child[c];
            node[pos].cnt++;
        }
        node[pos].thend++;
    }
    bool find_number(int &num){
        int pos = 0;
        for (int i = log2n; i >= 0; i--){
            int c = ((num & (1 << i)) ? (1):(0));
            if (node[pos].child[c] == -1) return false;
            pos = node[pos].child[c];
        }
        return (node[pos].thend != 0);
    }
    void delete_number(int &num){
        if (find_number(num) == false) return;
        int pos = 0;
        for (int i = log2n; i >= 0; i--){
            int c = (num >> i) & 1;
            int next = node[pos].child[c];
            node[next].cnt--;
            if (node[next].cnt == 0){
                node[pos].child[c] = -1;
                return;
            }
            pos = next;
        }
        node[pos].thend--;
    }
    int query_xor(int x){
        int pos = 0, res = 0;
        for (int i = log2n; i >= 0; i--){
            int c = (x >> i) & 1;
            if (node[pos].child[c^1] != -1){
                res += (1LL << i);
                pos = node[pos].child[c^1];
            }else pos = node[pos].child[c];
        }
        return res;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    return 0;
}