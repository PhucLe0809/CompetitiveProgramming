#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    vector <pair<int, int>> inp(n);
    for (int i = 0; i < n; i++){
        cin >> inp[i].first; inp[i].second = i+1;
    }
    sort(inp.begin(), inp.end());
    if (k<inp[0].first) cout << 0;
    else{
        int i = 0;
        vector <int> scan;
        while (k>=inp[i].first && i<n){
            scan.push_back(inp[i].second);
            k -= inp[i].first; i++;
        }
        cout << scan.size() << '\n';
        for (auto &it:scan) cout << it << " ";
    }
    return 0;
}