#include <bits/stdc++.h>

using namespace std;
vector <int64_t> scan;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, l, r, k, t;
    int64_t plus, tmp;
    while (test--)
    {
        cin >> n >> l >> r >> k;
        scan.clear();
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            if (l <= tmp && tmp <= r) scan.push_back(tmp);
        }
        sort(scan.begin(), scan.end());
        if (k < scan[0] || scan.empty()) cout << "0\n";
        else
        {
            plus = scan[0];
            for (t = 1; t < scan.size() && plus <= k; t++) plus += scan[t];
            if (plus <= k) cout << t << '\n';
            else cout << t-1 << '\n';
        }
    }
    return 0;
}