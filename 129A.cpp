#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t odd, even, sum, x;
    odd = even = sum = 0;
    for (int i = 0; i < n; i++){
        cin >> x; sum += x;
        if (x%2==0) even++;
        else odd++;
    }
    if (sum%2==0) cout << even;
    else cout << odd;
    return 0;
}