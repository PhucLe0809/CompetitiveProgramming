#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t n, b, x, y, sum, answer;
    while (test--)
    {
        cin >> n >> b >> x >> y;
        sum = answer = 0;
        for (int i = 0; i < n; i++)
        {
            if (sum + x <= b) sum += x;
            else sum -= y;
            answer += sum;
        }
        cout << answer << '\n';
    }
    return 0;
}