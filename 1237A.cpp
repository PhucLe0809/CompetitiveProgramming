#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> inp(n), scan(n);
    int res = 0;
    for (int i = 0; i < n; i++){
        cin >> inp[i];
        scan[i] = ceil(inp[i]*1.0/2);
        res += scan[i];
    }
    int t = -1;
    while (res!=0){
        t++;
        if (inp[t]%2==0) continue;
        if (res>0){ scan[t]--; res--; }
        else { scan[t]++; res++; }
    }
    for (auto &it:scan) cout << it << '\n';
    return 0;
}