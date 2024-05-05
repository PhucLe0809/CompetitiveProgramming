#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, x, sum;
    while (test--){
        cin >> n;
        sum = 0;
        map <int32_t, int32_t> mp;
        for (int i = 0; i < n; i++){
            cin >> x; sum += x;
            mp[x]++;
        }
        if (sum%n==0 && mp[sum/n]!=0)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}