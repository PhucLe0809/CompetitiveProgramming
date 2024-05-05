#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, tmp;
    vector <pair<int32_t, int32_t>> scan, out;
    while (test--)
    {
        cin >> n;
        scan.clear();
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            scan.push_back({tmp, i+1});
        }
        if (n == 1) cout << "0\n";
        else
        {
            sort(scan.begin(), scan.end());
            if (scan[0].first == scan[n-1].first) cout << "0\n";
            else if (scan[0].first == 1) cout << "-1\n";
                else
                {
                    out.clear();
                    while (scan[0].first != scan[n-1].first)
                    {
                        for (int i = 0; i < n; i++)
                            if (scan[i].first != scan[0].first)
                            {
                                scan[i].first = ceil(scan[i].first*1.0/scan[0].first);
                                out.push_back({scan[i].second, scan[0].second});
                            }
                        sort(scan.begin(), scan.end());
                    }
                    cout << out.size() << '\n';
                    for (auto x : out) 
                        cout << x.first << " " << x.second << '\n';
                }
        }
    }
    return 0;
}