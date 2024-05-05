#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    map <int, int> mp;
    vector <int> st;
    for (int i = 0; i < n; i++){
        int x; cin >> x; 
        if (mp.find(x) == mp.end()) st.push_back(x);
        mp[x]++;
    }
    cout << st.size() << endl;
    for (auto &it:st) cout << it << " " << mp[it] << endl;
    return 0;
}