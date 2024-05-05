#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    map <int32_t, int32_t> mp;
    int32_t x, sum; sum = 0;
    for (int i = 0; i < 5; i++){
        cin >> x; mp[x]++;
        sum += x;
    }
    int32_t key = 0;
    for (auto it:mp){
        if (it.second>1){
            key = max(key, it.first*min(it.second, 3));
        }
    }
    cout << sum - key;
    return 0;
}