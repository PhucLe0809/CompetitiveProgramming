#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, tmp, sts;
    while (test--)
    {
        cin >> n;
        map <int32_t, int32_t> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp; mp[tmp]++;
        }
        set <int32_t> st;
        for (auto x : mp)
        {
            sts = st.size();
            st.insert(x.first);
            if (sts == st.size() || x.second > 1) st.insert(x.first + 1);
        }
        cout << st.size() << '\n';
    }
    return 0;
}