#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    sort(inp.begin(), inp.end());
    vector <int> scan(n); int t = 0;
    for (int i = 0; i < n; i+=2){
        scan[i] = inp[i/2]; inp[i/2] = -1;
        t++;
    }
    for (int i = 1; i < n; i+=2){
        scan[i] = inp[t]; t++;
    }
    for (auto &it:scan) cout << it << " ";
    return 0;
}