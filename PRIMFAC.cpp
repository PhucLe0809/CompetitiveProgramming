#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector <pair<int, int>> fact;
    for (int i = 2; i*i <= n; i++){
        if (n % i == 0){
            int cnt = 0;
            while (n != 1 && n % i == 0){
                n /= i; cnt++;
            }
            fact.push_back({i, cnt});
        }
    }
    if (n != 1) fact.push_back({n, 1});
    cout << fact.size() << endl;
    for (auto &it:fact) cout << it.first << " " << it.second << endl;
    return 0;
}