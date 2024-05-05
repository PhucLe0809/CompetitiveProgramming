#include <bits/stdc++.h>
#define maxarray 2005

using namespace std; 
int32_t inp[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; test = 1;
    int32_t n, rate;
    while (test--){
        cin >> n;
        map <int32_t, int32_t> mp, scan;
        for (int i = 0; i < n; i++){
            cin >> inp[i];
            mp[inp[i]]++;
        }
        rate = 0;
        map <int32_t, int32_t> :: reverse_iterator rit;
        for (rit = mp.rbegin(); rit != mp.rend(); rit++){
            scan[rit->first] = rate+1;
            rate += rit->second;
        }
        for (int i = 0; i < n; i++) cout << scan[inp[i]] << " ";
        cout << '\n';
    }
    return 0;
}