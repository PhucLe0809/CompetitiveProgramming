#include <bits/stdc++.h>
#define endl '\n'
#define maxarray 300005
#define inf 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    set <int> st;
    for (int i = 1; i <= n; i++) st.insert(i);
    vector <int> answer(n);
    while (m--){
        int l, r, x; cin >> l >> r >> x;
        auto it1 = st.lower_bound(l);
        if (it1 == st.end()) continue;
        vector <int> scan;
        do{
            if (*it1 >= l && *it1 <= r && *it1 != x){
                answer[*it1 - 1] = x;
                scan.push_back(*it1);
            }
            it1++;
        }while (it1 != st.end() && *it1 <= r);
        for (auto &it:scan) st.erase(it);
    }
    answer[*st.begin() - 1] = 0;
    for (auto &it:answer) cout << it << " ";
    return 0;
}