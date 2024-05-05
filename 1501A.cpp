#include <bits/stdc++.h>

using namespace std; 
int32_t a[105], b[105], d[105], t[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, start, stay, leave;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
        for (int i = 1; i < n; i++) d[i] = a[i]-b[i-1];
        for (int i = 0; i < n; i++) cin >> t[i];
        start = a[0] + t[0];
        stay = (b[0]-a[0]+1)/2;
        leave = max(start + stay, b[0]);
        for (int i = 1; i < n; i++){
            start = max(leave+d[i]+t[i], a[i]+t[i]);
            stay = (b[i]-a[i]+1)/2;
            leave = max(start + stay, b[i]);
        }
        cout << start << '\n';
    }
    return 0;
}