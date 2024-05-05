#include <bits/stdc++.h>
#define maxarray 100005

using namespace std; 
int32_t inp[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, c; cin >> n >> c;
    for (int i = 0; i < n; i++) cin >> inp[i];
    int32_t cnt = 1;
    for (int i = 1; i < n; i++){
        if (inp[i]-inp[i-1]<=c) cnt++;
        else cnt = 1;
    }
    cout << cnt;
    return 0;
}