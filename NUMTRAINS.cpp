#include <bits/stdc++.h>

using namespace std; 
vector <string> inp;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    string x;
    for (int i = 0; i < n; i++){
        cin >> x; inp.push_back(x);
    }
    sort(inp.begin(), inp.end(), greater<>());
    for (auto x:inp) cout << x;
    return 0;
}