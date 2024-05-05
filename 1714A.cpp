#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, h, m;
    int32_t a, b, answer;
    while (test--)
    {
        cin >> n >> h >> m; 
        m = h*60 + m; answer = 24*60+1;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            b = a*60 + b;
            if (b >= m) answer = min(answer, b-m);
            else answer = min(answer, 24*60-m + b);
        }
        cout << answer/60 << " " << answer%60 << '\n';
    }
    return 0;
}