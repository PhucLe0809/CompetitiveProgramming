#include <bits/stdc++.h>

using namespace std;
vector <int> inp;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, d; cin >> n >> d;
    int x;
    for (int i = 0; i < n; i++){
        cin >> x;
        inp.push_back(x);
    }
    inp.push_back(INT_MIN);
    inp.push_back(INT_MAX);
    n += 2;
    if (n==1){
        cout << 2; return 0;
    }
    sort(inp.begin(), inp.end());
    set <int> st;
    st.insert(inp[1]-d);
    if (inp[2]-inp[1]>=2*d) st.insert(inp[1]+d);
    if (inp[n-2]-inp[n-3]>=2*d) st.insert(inp[n-2]-d);
    st.insert(inp[n-2]+d);
    for (int i = 2; i < n-2; i++){
        if (inp[i+1]-inp[i]>=2*d) st.insert(inp[i]+d);
        if (inp[i]-inp[i-1]>=2*d) st.insert(inp[i]-d);
    }
    cout << st.size();
    return 0;
}