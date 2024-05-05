#include <bits/stdc++.h>
#define maxarray 55

using namespace std;
string word[maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, m, plus, answer;
    while (test--)
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++) cin >> word[i];
        answer = 1e9;
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                plus = 0;
                for (int t = 0; t < m; t++)
                    plus += abs(word[i][t] - word[j][t]);
                answer = min(answer, plus);
            }
        }
        cout << answer << '\n';
    }
    return 0;
}