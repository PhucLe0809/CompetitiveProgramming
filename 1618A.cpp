#include <bits/stdc++.h>
#define maxarray 9

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
        for (int i = 0; i < 7; i++) cin >> inp[i];
        cout << inp[0] << " " << inp[1] << " " << inp[6]-inp[0]-inp[1] << '\n';
    }
    return 0;
}