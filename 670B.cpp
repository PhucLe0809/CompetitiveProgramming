#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t n, k; cin >> n >> k;
    vector <int64_t> inp(n+1), scan(n+1);
    for (int i = 1; i <= n; i++){
        cin >> inp[i]; scan[i] = (1LL*i*(i+1)/2);
    }
    scan[0] = 0;
    // scan[n+1] = (1LL*(n+1)*(n+2)/2);
    int pivot = 0;
    for (int i = 1; i<=n && !pivot; i++){
        if (k<=scan[i]){
            pivot = k-scan[i-1];
        }
    }
    cout << inp[pivot];
    return 0;
}