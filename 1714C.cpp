#include <bits/stdc++.h>

using namespace std;
vector <int32_t> out;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, x;
    while (test--)
    {
        cin >> n; 
        x = 9; out.clear();
        while (n > x)
        {
            out.push_back(x); 
            n -= x; x--;
        }
        out.push_back(n);
        reverse(out.begin(), out.end());
        for (auto &x : out) cout << x;
        cout << '\n';
    }
    return 0;
}