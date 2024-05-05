#include <bits/stdc++.h>
#define maxarray 105

using namespace std;
int32_t inp[maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, key; string str;
    while (test--)
    {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> inp[i];
        for (int i = 0; i < n; i++)
        {
            cin >> key >> str;
            for (int t = 0; t < key; t++)
                if (str[t] == 'D') 
                {
                    inp[i]++; inp[i] %= 10;
                }
                else 
                {
                    inp[i]--;
                    if (inp[i] < 0) inp[i] = 10+inp[i];
                }
        }
        for (int i = 0; i < n; i++) cout << inp[i] << " ";
        cout << '\n';
    }
    return 0;
}