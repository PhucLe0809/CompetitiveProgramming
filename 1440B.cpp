#include <bits/stdc++.h>
#define maxarray 1000005

using namespace std; 
int64_t inp[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, k, dis, m;
    int64_t sum;
    while (test--){
        cin >> n >> k;
        for (int i = 1; i <= n*k; i++) cin >> inp[i];
        sum = 0; m = n*k;
        dis = n - int32_t(ceil(n*1.0/2));
        for (int i = 1; i <= k; i++){
            sum += inp[m-dis]; m -= (dis+1);
        }
        cout << sum << '\n';
    }
    return 0;
}