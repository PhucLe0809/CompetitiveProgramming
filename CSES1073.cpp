#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> scan;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        auto it = upper_bound(scan.begin(), scan.end(), x);
        if (it == scan.end()){
            scan.push_back(x); continue;
        }
        int pos = it - scan.begin();
        scan[pos] = x;
    }
    cout << scan.size();
    return 0;
}