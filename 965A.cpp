#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t k, n, s, p; cin >> k >> n >> s >> p;
    int32_t amount = (n/s)+(n%s!=0);
    amount *= k;
    cout << (amount/p)+(amount%p!=0); 
    return 0;
}