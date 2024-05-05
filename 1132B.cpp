#include <bits/stdc++.h>

using namespace std; 
vector <int64_t> scan;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int64_t x,total = 0;
    for (int i = 0; i < n; i++){
        cin >> x;
        total += x;
        scan.push_back(x);
    }
    int m; cin >> m;
    int q;
    sort(scan.begin(), scan.end());
    while (m--){
        cin >> q;
        cout << total - scan[n-q] << '\n';
    }
    return 0;
}