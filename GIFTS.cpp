#include <bits/stdc++.h>
#define maxarray 1000005

using namespace std;
int64_t inp[maxarray], scan[maxarray];
int64_t maxleft[maxarray], maxright[maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> inp[i];
    for (int i = 1; i <= k; i++) scan[1] += inp[i];
    for (int i = 2; i <= n-k+1; i++) scan[i] = scan[i-1]-inp[i-1]+inp[k+i-1];
    maxleft[1] = scan[1];
    for (int i = 2; i <= n-k+1; i++){
        maxleft[i] = max(maxleft[i-1], scan[i]);
    }
    maxright[n-k+1] = scan[n-k+1];
    for (int i = n-k; i >= 1; i--){
        maxright[i] = max(maxright[i+1], scan[i]);
    }
    int64_t answer = maxright[1];
    int64_t a, b;
    for (int i = 1; i <= n; i++) 
    { 
        (i - k < 1)?(a = 0):(a = maxleft[i-k]);
        (i + k > n-k+1)?(b = 0):(b = maxright[i+k]);
        answer = min(answer, max(a, b));
    }
    cout << answer;
    return 0;
}