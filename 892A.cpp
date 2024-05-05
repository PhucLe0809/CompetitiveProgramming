#include <bits/stdc++.h>
#define maxarray 100005

using namespace std; 
int64_t a[maxarray], b[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int64_t volume = 0;
    for (int i = 1; i <= n; i++){
        cin >> a[i]; 
        volume += a[i];
    }
    for (int i = 1; i <= n; i++){
        cin >> b[i];
    }
    sort(b+1, b+n+1);
    int64_t capacity = b[n-1]+b[n];
    if (volume <= capacity) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}