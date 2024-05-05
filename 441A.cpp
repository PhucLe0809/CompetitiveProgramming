#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, v; cin >> n >> v;
    int k, x;
    set <int> st;
    for (int i = 0; i < n; i++){
        cin >> k;
        for (int j = 0; j < k; j++){
            cin >> x;
            if (x<v) st.insert(i+1);
        }
    }
    cout << st.size() << '\n';
    for (auto &it:st) cout << it << " ";
    return 0;
}