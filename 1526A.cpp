#include <bits/stdc++.h>
#define maxarray 55

using namespace std;
int32_t inp[maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n;
    while (test--)
    {
        cin >> n;
        for (int i = 0; i < 2*n; i++) cin >> inp[i];
        sort(inp, inp + 2*n);
        for (int i = 0; i < n; i++)
            cout << inp[i] << " " << inp[2*n-1-i] << " ";
        cout << '\n';
    }
    return 0;
}