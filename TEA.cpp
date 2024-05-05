#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
int32_t a[maxarray], b[maxarray];
int64_t out[maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n;
    while (test--)
    {
        cin >> n;
        for (int i = 0; i < n; i++) 
            cin >> a[i];
        for (int i = 0; i < n; i++) 
        { cin >> b[i]; out[i] = 0; }
        for (int j = 0; j < n; j++)
        {
            for (int i = j; i < n; i++)
            {
                out[i] += min(a[i-j], b[i]);
                a[i-j] -= min(a[i-j], b[i]);
            }
        }
        for (int i = 0; i < n; i++) cout << out[i] << " ";
        cout << '\n';
    }
    return 0;
}