#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    char key;
    while (test--)
    {
        set <char> st;
        for (int i = 0; i < 4; i++)
        { cin >> key; st.insert(key); }
        if (st.size() == 1) cout << "0\n";
        if (st.size() == 2) cout << "1\n";
        if (st.size() == 3) cout << "2\n";
        if (st.size() == 4) cout << "3\n";
    }
    return 0;
}