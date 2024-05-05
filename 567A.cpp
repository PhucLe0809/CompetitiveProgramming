#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
int32_t inp[maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; test = 1;
    int32_t n;
    while (test--)
    {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> inp[i];
        cout << inp[1]-inp[0] << " " << inp[n-1]-inp[0] << '\n';
        for (int i = 1; i < n-1; i++)
        {
            cout << min(inp[i+1]-inp[i], inp[i]-inp[i-1]);
            cout << " ";
            cout << max(inp[i]-inp[0], inp[n-1]-inp[i]);
            cout << '\n';
        }
        cout << inp[n-1]-inp[n-2] << " " << inp[n-1]-inp[0] << '\n';
    }
    return 0;
}