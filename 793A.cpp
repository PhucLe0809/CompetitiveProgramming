#include <bits/stdc++.h>

using namespace std;
vector <int> inp;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    int m, x; m = INT_MAX;
    set <int> st;
    for (int i = 0; i < n; i++){
        cin >> x; m = min(m, x);
        inp.push_back(x);
        st.insert(x%k);
    }
    if (st.size()!=1) cout << -1;
    else{
        int64_t cnt = 0;
        for (auto &it:inp){
            cnt += int64_t(it-m)/k;
        }
        cout << cnt;
    }
    return 0;
}