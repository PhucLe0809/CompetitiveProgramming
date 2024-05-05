#include <bits/stdc++.h>

using namespace std;
vector <int> inp, scan;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int x;
    for (int i = 0; i < n-1; i++){
        cin >> x; inp.push_back(x);
    }
    scan.push_back(n);
    int k = n-1;
    while (true){
        scan.push_back(inp[k-1]);
        if (inp[k-1]==1) break;
        else k = inp[k-1]-1;
    }
    reverse(scan.begin(), scan.end());
    for (auto it:scan) cout << it << " ";
    return 0;
}