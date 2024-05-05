#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t n, k; cin >> n >> k;
    int64_t answer = (n/2)/(k+1);
    cout << answer << " " << k*answer << " " << n-(k+1)*answer;
    return 0;
}