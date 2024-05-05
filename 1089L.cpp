#include <bits/stdc++.h>

using namespace std;
set <int> st;
vector <int> a, b, scan;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    int x;
    for (int i = 0; i < n; i++){
        cin >> x; a.push_back(x);
    }
    for (int i = 0; i < n; i++){
        cin >> x; b.push_back(x);
    }
    vector <vector<int>> inp(k+1);
    for (int i = 0; i < n; i++){
        st.insert(a[i]);
        inp[a[i]].push_back(b[i]);
    }
    for (int i = 1; i <= k; i++){
        if (inp[i].size()>1){
            sort(inp[i].begin(), inp[i].end());
            for (int j = 0; j < inp[i].size()-1; j++){
                scan.push_back(inp[i][j]);
            }
        }
    }
    sort(scan.begin(), scan.end());
    int d = k-st.size();
    int64_t time = 0;
    for (int i = 0; i < d; i++) time += int64_t(scan[i]);
    cout << time;
    return 0;
}