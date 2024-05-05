#include <bits/stdc++.h>
#define maxarray 100005

using namespace std; 
int64_t inp[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 0; i < n; i++) cin >> inp[i];
    for (int i = 0; i < n-1; i++) cout << inp[i]+inp[i+1] << " ";
    cout << inp[n-1];
    return 0;
}