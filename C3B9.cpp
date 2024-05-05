#include <bits/stdc++.h>
#define int long long
#define inf LLONG_MAX
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    vector <int> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];

    sort(inp.begin(), inp.end(), greater<int>());

    int x; cin >> x;
    if (inp[n-1] >= x) inp.push_back(x);
    else{
        for (int i = 0; i < n; i++){
            if (x >= inp[i]){
                inp.insert(inp.begin() + i, x);
                break;
            }
        }
    }

    for (int i = 0; i <= n; i++) cout << inp[i] << " ";

    return 0;
}