#include <bits/stdc++.h>

using namespace std;
int a[505];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    int cnt = 0;
    for (int i = 0; i < n-1; i++){
        if (a[i]+a[i+1]<k){
            cnt += (k-(a[i]+a[i+1]));
            a[i+1] = k-a[i];
        }
    }
    cout << cnt << '\n';
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}