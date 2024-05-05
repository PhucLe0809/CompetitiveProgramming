#include <bits/stdc++.h>
#define maxarray 10005

using namespace std; 
int32_t inp[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 0; i < n; i++) cin >> inp[i];
    int32_t cnt = 0;
    for (int i = 1; i < n-1; i++){
        if (inp[i]>inp[i-1] && inp[i]>inp[i+1]) cnt++;
        if (inp[i]<inp[i-1] && inp[i]<inp[i+1]) cnt++;
    }
    cout << cnt;
    return 0;
}