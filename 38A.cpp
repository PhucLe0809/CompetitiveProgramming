#include <bits/stdc++.h>

using namespace std; 
int32_t d[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 1; i < n; i++) cin >> d[i];
    int32_t a, b; cin >> a >> b;
    int32_t answer = 0;
    for (int i = a; i < b; i++) answer += d[i];
    cout << answer;
    return 0;
}