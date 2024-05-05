#include <bits/stdc++.h>
#define maxarray 1005

using namespace std; 
int32_t inp[maxarray], lft[maxarray], rght[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, i, j, k;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++) cin >> inp[i];
        lft[0] = 0;
        for (int i = 1; i < n; i++){
            if (inp[i] < inp[lft[i-1]]) lft[i] = i;
            else lft[i] = lft[i-1];
        }
        rght[n-1] = n-1;
        for (int i = n-2; i >= 0; i--){
            if (inp[i] < inp[rght[i+1]]) rght[i] = i;
            else rght[i] = rght[i+1];
        }
        i = j = k = -1;
        for (int t = 1; t < n-1; t++){
            if (inp[t]>inp[lft[t-1]] && inp[t]>inp[rght[t+1]]){
                i = lft[t-1]; j = t ; k = rght[t+1];
                break;
            }
        }
        if (i==-1) cout << "NO\n";
        else{
            cout << "YES\n";
            cout << i+1 << " " << j+1  << " " << k+1 << '\n';
        }
    }
    return 0;
}