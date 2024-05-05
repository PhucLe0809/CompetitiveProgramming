#include <bits/stdc++.h>

using namespace std; 
vector <int32_t> inp;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, m; cin >> n >> m;
    int32_t x;
    for (int i = 0; i < n; i++){
        cin >> x;
        inp.push_back(x);
    }
    sort(inp.begin(), inp.end());
    int32_t t = n-1;
    while (m > 0){
        m -= inp[t]; t--;
    }
    cout << n-t-1; 
    return 0;
}