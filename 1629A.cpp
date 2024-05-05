#include <bits/stdc++.h>
#define maxarray 105

using namespace std;
int32_t a[maxarray], b[maxarray];
vector <pair<int32_t, int32_t>> scan;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, k, answer;
    while (test--)
    {
        cin >> n >> k;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        scan.clear();
        for (int i = 0; i < n; i++) scan.push_back({a[i], b[i]});
        sort(scan.begin(), scan.end());
        answer = k;
        for (int i = 0; i < n; i++)
            if (answer >= scan[i].first) answer += scan[i].second;
        cout << answer << '\n';
    }
    return 0;
}