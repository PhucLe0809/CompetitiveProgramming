#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, x; cin >> n >> x;
    vector <int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    vector <int> scan;
    int i = n-1, j = 0, it = 0;
    while (i>=0 && j<n){
        if (a[i]+b[j]>=x){
            i--; it++;
        }
        j++;
    }    
    cout << 1 << " " << it;
    return 0;
}