#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    vector <int> inp;
    for (int i = 0; i < 10; i++){
        int x; cin >> x; inp.push_back(x);
    }
    int key; cin >> key;
    vector <int> ind;
    for (int i = 0; i < 10; i++){
        if (inp[i] == key) ind.push_back(i+1);
    }
    if (ind.empty()) cout << -1;
    else for (auto &it:ind) cout << it << " ";
    return 0;
}