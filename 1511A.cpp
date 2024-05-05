#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, cnt, tmp;
    while (test--)
    {
        cin >> n; cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp; 
            if (tmp == 2) cnt++;
        }
        cout << n-cnt << '\n';
    }
    return 0;
}