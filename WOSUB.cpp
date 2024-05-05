#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector <int> inp(n+1);
    for (int i = 1; i <= n; i++) cin >> inp[i];
    int s; cin >> s;
    vector <int> prefix(n+1);
    map <int, int> mp; 
    int answer = -1;
    for (int i = 1; i <= n; i++){
        prefix[i] = prefix[i-1] + inp[i];
        if (mp[prefix[i]] == 0) mp[prefix[i]] = i;
        if (mp[prefix[i] - s] != 0) answer = max(answer, i - mp[prefix[i] - s]);
    }
    cout << answer;
    return 0;
}