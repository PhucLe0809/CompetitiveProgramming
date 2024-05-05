#include <bits/stdc++.h>

using namespace std; 
int32_t inp[10005];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++) cin >> inp[i];
        inp[0]++;
        for (int i = 1; i < n; i++){
            if (inp[i]==1) inp[i]++;
            if (inp[i]%inp[i-1]==0) inp[i]++;
        }
        for (int i = 0; i < n; i++) cout << inp[i] << " ";
        cout << '\n';
    }
    return 0;
}