#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int x;
    set <int> st;
    for (int i = 0; i < n; i++){
        cin >> x; 
        if (x<=n) st.insert(x);
    }
    cout << n-st.size();
    return 0;
}