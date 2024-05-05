#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, m; 
    int32_t tmp, sts;
    vector <int32_t> moment;
    while (test--)
    {
        cin >> n >> m;
        set <int32_t> st; 
        moment.clear(); sts = 0;
        for (int i = 0; i < m; i++)
        {
            sts = st.size();
            cin >> tmp; st.insert(tmp);
            if (sts != st.size()) moment.push_back(i+1);
        }
        for (int i = moment.size(); i < n; i++)
            moment.push_back(-1);
        for (int i = n-1; i >= 0; i--) cout << moment[i] << " ";
        cout << '\n';
    }
    return 0;
}