#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t a, b; cin >> a >> b;
    int32_t n = min(a, b);
    int64_t answer = 1;
    for (int i = 2; i <= n; i++) answer *= i;
    cout << answer;
    return 0;
}