#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t tmp;
    while (test--)
    {
        set <int32_t> st;
        for (int i = 0; i < 4; i++)
        { cin >> tmp; st.insert(tmp); }
        if (st.size() == 1)
        {
            if (*st.begin() == 0) cout << "0\n";
            else cout << "2\n";
        } else cout << "1\n";
    }
    return 0;
}