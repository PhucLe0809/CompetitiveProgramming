#include <bits/stdc++.h>

using namespace std; 
vector <int64_t> inp;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int x;
    for (int i = 0; i < n; i++){
        cin >> x; 
        inp.push_back(x);
    }
    sort(inp.begin(), inp.end());
    int64_t answer = 0;
    for (int i = 0; i < n/2; i++){
        answer += (inp[i]+inp[n-i-1])*(inp[i]+inp[n-i-1]);
    }
    cout << answer;
    return 0;
}