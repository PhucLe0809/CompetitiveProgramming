#include <bits/stdc++.h>
#define maxarray 105

using namespace std;
int32_t inp[maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; test = 1;
    int32_t n, plus;
    while (test--)
    {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> inp[i];
        sort(inp, inp + n); plus = 0;
        for (int i = 0; i < n; i += 2)
            plus += (inp[i+1] - inp[i]);
        cout << plus << '\n';
    }
    return 0;
}