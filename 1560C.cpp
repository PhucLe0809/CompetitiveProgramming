#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t k, n, col, row;
    while (test--)
    {
        cin >> k;
        n = ceil(sqrt(k));
        col = 0;
        if (k > (n*n - (n-1))) 
            col = n*n - k + 1;
        else col = n;
        row = 0;
        if (k >= (n*n - (n - 1))) row = n;
        else 
        {
            row = n - ((n*n - (n-1)) - k);
        }
        cout << row << " " << col << '\n';
    }
    return 0;
}