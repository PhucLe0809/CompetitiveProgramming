#include <bits/stdc++.h>

using namespace std; 
int32_t inp[105], scan[105];
int32_t lft[105], rght[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 0; i < n; i++) cin >> inp[i];
    for (int i = 1; i < n; i++) scan[i]=inp[i]-inp[i-1];
    lft[0] = 0; lft[1] = scan[1];
    for (int i = 2; i < n; i++) lft[i]=max(scan[i], lft[i-1]);
    rght[n-1] = 0; rght[n-2] = scan[n-1];
    for (int i = n-3; i >= 0; i--) rght[i]=max(scan[i+1], rght[i+1]);
    int32_t answer = 1e9;
    for (int i = 0; i < n-2; i++){
        answer = min(answer, max({lft[i], inp[i+2]-inp[i], rght[i+2]}));
    }
    cout << answer;
    return 0;
}