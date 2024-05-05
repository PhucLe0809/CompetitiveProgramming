#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    vector <int> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    vector <pair<int, int>> query(m);
    for (int i = 0; i < m; i++){
        cin >> query[i].first;
        query[i].first--; query[i].second = i;
    }
    sort(query.begin(), query.end());
    vector <int> answer(m);
    set <int> st;
    int j = m-1;
    for (int i = n-1; i >= 0; i--){
        st.insert(inp[i]);
        while (i == query[j].first){
            answer[query[j].second] = st.size(); 
            j--;
        }
    }
    for (auto &it:answer) cout << it << '\n';
    return 0;
}