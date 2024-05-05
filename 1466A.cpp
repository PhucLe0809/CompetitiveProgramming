#include <bits/stdc++.h>
#define maxarray 55

using namespace std;
int32_t inp[maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n;
    while (test--)
    {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> inp[i];
        set <int32_t> st;
        for (int i = 0; i < n-1; i++)
            for (int j = i+1; j < n; j++)
                st.insert(inp[j]-inp[i]);
        cout << st.size() << '\n';
    }
    return 0;
}