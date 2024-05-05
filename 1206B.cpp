#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t tmp;
    int64_t answer, pre, ch;
    answer = ch = 0; pre = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        if (tmp == 0) ch++;
        if (tmp < 0)
        {
            answer += (abs(tmp) - 1);
            tmp = -1;
        } else
        {
            answer += abs(1 - tmp);
            tmp = 1;
        }
        pre *= tmp;
    }
    if (pre < 0 && ch == 0) answer += 2;
    cout << answer << '\n';
    return 0;
}