#include <bits/stdc++.h>

using namespace std; 
pair <int32_t, int32_t> chap[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> chap[i].first >> chap[i].second;
    int32_t k; cin >> k;
    for (int i = 1; i <= n; i++){
        if (chap[i].first<=k && k<=chap[i].second){
            k = i; break;
        }
    }
    cout << n-k+1;
    return 0;
}