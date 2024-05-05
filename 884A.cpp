#include <bits/stdc++.h>

using namespace std; 
int32_t inp[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, t; cin >> n >> t;
    for (int i = 0; i < n; i++) cin >> inp[i];
    int32_t sum = 0;
    int32_t day;
    for (day = 0; day<n && sum<t; day++){
        sum += (86400-inp[day]);
    }
    cout << day;
    return 0;
}