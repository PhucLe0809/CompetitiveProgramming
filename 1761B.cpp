#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, x;
    while (test--){
        cin >> n;
        set <int> st;
        for (int i = 0; i < n; i++){
            cin >> x; st.insert(x);
        }
        if (st.size()<=2) cout << n/2+1 << '\n';
        else cout << n << '\n';
    }
    return 0;
}