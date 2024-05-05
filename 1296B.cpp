#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t s, answer, res;
    while (test--)
    {
        cin >> s; answer = s;
        while (s/10 != 0)
        {
            res = s/10; answer += res;
            s -= (s/10)*10; s += res;
        }
        cout << answer << '\n';
    }
    return 0;
}