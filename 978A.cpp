#include <bits/stdc++.h>
#define maxarray 1005

using namespace std;
int32_t tick[maxarray];
vector <pair<int32_t, int32_t>> scan;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, tmp; cin >> n;
    fill(tick, tick+maxarray, -1);
    for (int i = 0; i < n; i++)
    {
        cin >> tmp; tick[tmp] = i;
    }
    for (int i = 0; i < maxarray; i++)
        if (tick[i] != -1)
            scan.push_back({tick[i], i});
    sort(scan.begin(), scan.end());
    cout << scan.size() << '\n';
    for (auto x : scan) cout << x.second << " ";
    return 0;
}