#include <bits/stdc++.h>
#define maxarray 200005

using namespace std; 
int32_t inp[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 0; i < n; i++) cin >> inp[i];
    int32_t cnt = 1;
    for (int i = n-2; i >= 0; i--){
        if (inp[i]==inp[i+1]) cnt++;
        else break;
    }
    cout << n-cnt;
    return 0;
}