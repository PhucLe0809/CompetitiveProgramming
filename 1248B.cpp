#include <bits/stdc++.h>

using namespace std; 
vector <int64_t> inp;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int64_t x;
    for (int i = 0; i < n; i++){
        cin >> x; inp.push_back(x);
    }
    sort(inp.begin(), inp.end());
    int64_t a, b;
    a = b = 0;
    for (int i = 0; i < n/2; i++) a += inp[i];
    for (int i = n/2; i < n; i++) b += inp[i];
    cout << a*a + b*b;
    return 0;
}