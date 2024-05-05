#include <bits/stdc++.h>
#define maxarray 10005

using namespace std;
int32_t a[maxarray], b[maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    int32_t m; cin >> m;
    for (int i = 0; i < m; i++) cin >> b[i];
    cout << *max_element(a, a+n) << " " << *max_element(b, b+m);
    return 0;
}