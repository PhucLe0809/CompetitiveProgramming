#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, k; cin >> n >> k;
    string str; cin >> str;
    map <char, int32_t> mp;
    for (auto x:str) mp[x]++;
    int32_t out = mp['A'];
    for (int i = 1; i < k; i++){
        out = min(out, mp['A'+i]);
    }
    cout << k*out;
    return 0;
}