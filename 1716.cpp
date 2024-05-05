#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, answer;
    while (test--)
    {
        cin >> n;
        if (n == 1) 
        {
            cout << 2 << '\n';
            continue;
        }
        answer = n/2;
        if (n % 3 == 0)
            answer = min(answer, n/3);
        else answer = min(answer, n/3 + 1);
        cout << answer << '\n';
    }
    return 0;
}