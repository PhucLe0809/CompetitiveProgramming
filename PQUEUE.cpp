#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    priority_queue <int, vector<int>> que;
    int q; cin >> q;
    while (q--){
        char key; cin >> key;
        if (key == '+'){
            int n; cin >> n;
            if (que.size() < 15000) que.push(n);
        }
        if (key == '-'){
            int num;
            if (que.size()) num = que.top();
            while (que.size() && que.top() == num) que.pop();
        }
    }
    set <int> st;
    while (que.size()){
        st.insert(-que.top()); que.pop();
    }
    cout << st.size() << endl;
    for (auto &it:st) cout << -it << " ";
    return 0;
}