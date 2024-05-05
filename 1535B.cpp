#include <bits/stdc++.h>
#define maxarray 2005

using namespace std;
int32_t inp[maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, cnt, x; 
    while (test--)
    {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> inp[i];
        sort(inp, inp + n);
        cnt = 0;
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
                if (inp[i]%2 == 0 || inp[j]%2 == 0)
                    cnt++;
                else 
                {
                    x = __gcd(inp[i], 2*inp[j]);
                    if (x > 1) cnt++;
                }
        }
        cout << cnt << '\n';
    }
    return 0;
}