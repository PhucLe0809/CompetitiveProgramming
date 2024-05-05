#include <bits/stdc++.h>
#define maxarray 100005

using namespace std; 
int32_t a[maxarray], b[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t na, nb, k, m; 
    cin >> na >> nb >> k >> m;
    for (int i = 0; i < na; i++) cin >> a[i];
    for (int i = 0; i < nb; i++) cin >> b[i];
    int32_t it = nb-(upper_bound(b, b+nb, a[k-1])-b);
    if (it>=m) cout << "YES\n"; else cout << "NO\n";
    return 0;
}