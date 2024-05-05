#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n, k; cin >> n >> k;
        set <int> st; int x;
        for (int i = 0; i < n; i++){
            cin >> x; st.insert(x);
        }
        if (st.find(k) != st.end()) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}