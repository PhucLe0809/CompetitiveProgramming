#include <bits/stdc++.h>

using namespace std; 
int32_t inp[505];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t p, n; cin >> p >> n;
    for (int i = 0; i < n; i++) cin >> inp[i];
    vector <int32_t> tick(p+5, -1);
    bool check = true;
    for (int i = 0; i<n && check; i++){
        if (tick[inp[i]%p]==-1) tick[inp[i]%p] = inp[i];
        else{
            cout << i+1; check = false; break;
        }
    }
    if (check) cout << -1;
    return 0;
}