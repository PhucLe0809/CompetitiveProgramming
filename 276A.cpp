#include <bits/stdc++.h>
#define inf 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, k; cin >> n >> k;
    int64_t f, t, answer;
    answer = -inf;
    while (n--)
    {
        cin >> f >> t;
        if (t > k) answer = max(answer, f-t+k);
        else answer = max(answer, f);
    }
    cout << answer << '\n';
    return 0;
}