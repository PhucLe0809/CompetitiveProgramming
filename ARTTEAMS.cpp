#include <bits/stdc++.h>

using namespace std; 
vector <int32_t> inp;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t x;
    for (int i = 0; i < n; i++){
        cin >> x; inp.push_back(x);
    }
    sort(inp.begin(), inp.end());
    int32_t answer = inp[4]-inp[0];
    for (int i = 1; i < n-4; i++){
        answer = min(answer, inp[i+4]-inp[i]);
    }
    cout << answer;
    return 0;
}