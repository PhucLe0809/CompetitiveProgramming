#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
int64_t scan[maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, q; cin >> n >> q;
    string str; cin >> str;
    int64_t curr = 0; scan[0] = 0;
    for (int i = 0; i < n; i++)
    {
        curr += (int(str[i]) - 96);
        scan[i+1] = curr;
    }
    int32_t l, r, result;
    while (q--)
    {
        cin >> l >> r;
        cout << scan[r] - scan[l-1] << '\n';
    }
    return 0;
}