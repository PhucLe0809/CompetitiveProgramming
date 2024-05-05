#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, a, b; cin >> n >> a >> b;
    vector <int32_t> one(n, 0), two(n, 0);
    for (int i = 0; i < min(a, n); i++) one[i] = 1;
    if (a!=0) one[min(a, n)-1] = (a>=n) ? a-n+1:1;
    if (a>=n){
        if (n>1 && b!=0){
            one[n-1]=0; one[n-2]=a-n+2;
        }
        two[n-1] = b;
    }
    else{
        for (int i = min(a, n); i < min(min(a, n)+b, n); i++) two[i] = 1;
        if (b!=0) two[min(min(a, n)+b, n)-1] = (min(a, n)+b>=n) ? b-(n-min(a, n))+1:1;
    }
    int32_t cnt = 0;
    for (int i = 0; i < n; i++){
        if (one[i]==two[i]) cnt++;
    }
    cout << cnt << '\n';
    for (int i = 0; i < n; i++){
        cout << one[i] << ":" << two[i] << '\n';
    }
    // cerr << n << " " << a << " " << b;
    return 0;
}