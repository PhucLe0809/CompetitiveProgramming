#include <bits/stdc++.h>
#define inf 1e9
#define maxarray 105

using namespace std;
int32_t tick[maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, tmp, answer;
    while (test--)
    {
        cin >> n;
        fill(tick, tick + maxarray, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> tmp; tick[tmp]++;
        }
        answer = 1;
        for (int i = 0; i < maxarray; i++)
            answer = max(answer, tick[i]);
        cout << answer << '\n';
    }
    return 0;
}