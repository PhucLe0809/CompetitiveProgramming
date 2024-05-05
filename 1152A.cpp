#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, m; cin >> n >> m;
    int32_t x, a, b, c, d;
    a = b = 0;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (x%2==0) a++;
        else b++;
    }
    c = d = 0;
    for (int i = 0; i < m; i++){
        cin >> x;
        if (x%2==0) c++;
        else d++;
    }
    cout << min(a, d)+min(b, c);
    return 0;
}