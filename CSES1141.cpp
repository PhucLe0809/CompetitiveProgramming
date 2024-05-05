#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    map <int, int> mp;
    int answer = 0, ind = 0;
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        if (mp[x] != 0) ind = max(ind, mp[x]);
        mp[x] = i;
        answer = max(answer, i - ind);
    }
    cout << answer;
    return 0;
}