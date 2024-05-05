#include <bits/stdc++.h>
#define maxarray 105

using namespace std;
int64_t inp[maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n; int64_t answer;
    while (test--)
    {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> inp[i];
        sort(inp, inp + n);
        answer = inp[n-1];
        for (int i = 0; i < n-1; i++) answer &= inp[i];
        cout << answer << '\n';
    }
    return 0;
}