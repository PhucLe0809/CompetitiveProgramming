#include <bits/stdc++.h>

using namespace std; 
int32_t inp[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, k, x; cin >> n >> k >> x;
    for (int i = 0; i < n; i++) cin >> inp[i];
    int32_t run = n-1;
    int32_t time = 0;
    while (inp[run]>x && k){
        time += x; 
        run--; k--;
    }
    for (int i = 0; i <= run; i++) time += inp[i];
    cout << time;
    return 0;
}