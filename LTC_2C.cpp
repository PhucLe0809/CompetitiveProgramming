#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 10000005

using namespace std;
int inp[maxarray];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    for (int i = 0; i < n; i++) cin >> inp[i];
    int max1 = LONG_MIN, max2 = LONG_MIN, max3 = LONG_MIN;
    int min1 = LONG_MAX, min2 = LONG_MAX;
    for (int i = 0; i < n; i++){
        if (inp[i] > max1){
            max3 = max2;
            max2 = max1;
            max1 = inp[i];
        }
        else if (inp[i] > max2){
            max3 = max2;
            max2 = inp[i];
        }
        else if (inp[i] > max3){
            max3 = inp[i];
        }
        if (inp[i] < min1){
            min2 = min1;
            min1 = inp[i];
        }
        else if (inp[i] < min2){
            min2 = inp[i];
        }
    }
    int ans = max(max1 * max2 * max3, max1 * min1 * min2);
    cout << ans << endl;
    return 0;
}