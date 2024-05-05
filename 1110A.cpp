#include <bits/stdc++.h>
#define maxarray 100005

using namespace std; 
int32_t arr[maxarray], digit[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t b, k; cin >> b >> k;
    for (int i = 0; i < k; i++) cin >> arr[i];
    digit[0] = 1;
    for (int i = 1; i < k; i++){
        digit[i] = (digit[i-1]*(b%10))%10;
    }
    for (int i = 0; i < k; i++){
        digit[i] = (digit[i]*(arr[k-i-1]%10))%10;
    }
    int32_t scan = accumulate(digit, digit+k, 0);
    if (scan%2) cout << "odd";
    else cout << "even";
    return 0;
}