#include <bits/stdc++.h>

using namespace std;
vector <int32_t> odd, even;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, tmp;
    while (test--)
    {
        cin >> n;
        odd.clear(); even.clear();
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            if (tmp%2 == 0) even.push_back(tmp);
            else odd.push_back(tmp);
        }
        for (auto &x : odd) cout << x << " ";
        for (auto &x : even) cout << x << " ";
        cout << '\n';
    }
    return 0;
}