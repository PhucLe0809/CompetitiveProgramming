#include <bits/stdc++.h>
#define maxarray 105

using namespace std;
int32_t arr[maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, m, idx, c;
    while (test--)
    {
        cin >> n; m = n;
        idx = 0;
        for (int i = 0; i < n; i++) cin >> arr[i];
        while (m--)
        {
            c = arr[m];
            idx = 0;
            for (int i = 0; i < n; i++)
                if (i != m) idx ^= arr[i];
            if (idx == c)
            {
                cout << c << '\n';
                break; 
            }  
        }
    }
    return 0;
}