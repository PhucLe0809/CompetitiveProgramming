#include <bits/stdc++.h>

using namespace std; 
map <int32_t, int32_t> mp;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t x, desk, answer;
    desk = answer = 0;
    for (int i = 0; i < 2*n; i++){
        cin >> x; mp[x]++;
        if (mp[x]==2) desk--;
        else desk++;
        answer = max(answer, desk);
    }
    cout << answer;
    return 0;
}