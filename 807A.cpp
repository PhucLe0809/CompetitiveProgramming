#include <bits/stdc++.h>

using namespace std; 
int32_t a[1005], b[1005];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t cnt = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
        if (a[i]==b[i]) cnt++;
    }
    bool check = true;
    for (int i = 1; i<n && check; i++){
        if (a[i]>a[i-1]) check = false;
    }
    if (cnt==n){
        if (check) cout << "maybe";
        else cout << "unrated";
    } else cout << "rated";
    return 0;
}