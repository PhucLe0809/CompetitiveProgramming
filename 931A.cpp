#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t a, b; cin >> a >> b;
    int32_t dis = abs(a-b);
    cout << (dis/2)*(dis/2+1)+(dis%2)*(dis/2+1);
    return 0;
}