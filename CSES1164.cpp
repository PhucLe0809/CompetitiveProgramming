#include <bits/stdc++.h>

using namespace std;

bool comp(pair<pair<int, int>, int> &a, pair<pair<int, int>, int> &b){
    if (a.first.first == b.first.first) return a.first.second < b.first.second;
    else return a.first.first < b.first.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <pair<pair<int, int>, int>> inp;
    for (int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        inp.push_back({{x, y}, i});
    }
    sort(inp.begin(), inp.end(), comp);
    vector <int> scan, answer(n);
    multiset <int> st;
    map <int, stack<int>> mp;
    for (auto &item:inp){
        int x = item.first.first;
        int y = item.first.second;
        int ind = item.second;
        auto it = st.lower_bound(x);
        if (it == st.begin()){
            scan.push_back(y);
            answer[ind] = scan.size();
            st.insert(y);
            mp[y].push(answer[ind] - 1);
        }else{
            it--;
            int pos = mp[*it].top(); mp[*it].pop();
            scan[pos] = y;
            answer[ind] = pos + 1;
            st.erase(it); st.insert(y);
            mp[y].push(answer[ind] - 1);
        }
    }
    cout << scan.size() << '\n';
    for (auto &it:answer) cout << it << " ";
    return 0;
}