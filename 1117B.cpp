#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t n, m, k; cin >> n >> m >> k;
    vector <int64_t> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    sort(inp.begin(), inp.end());
    int64_t answer = (m/(k+1))*k*inp[n-1]+(m/(k+1))*1*inp[n-2]+(m%(k+1))*inp[n-1];
    cout << answer;
    return 0;
}