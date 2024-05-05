#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> inp(2*n);
    set <int> st;
    for (int i = 0; i < 2*n; i++){
        cin >> inp[i]; st.insert(inp[i]);
    }
    if (st.size()==1) cout << -1;
    else{
        sort(inp.begin(), inp.end());
        for (int i = 0; i < n; i++) cout << inp[i] << " ";
        for (int i = n; i < 2*n; i++) cout << inp[i] << " ";
    }
    return 0;
}