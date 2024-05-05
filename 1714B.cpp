#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
int32_t inp[maxarray], scan[maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, run;
    while (test--)
    {
        cin >> n; 
        for (int i = 0; i < n; i++) cin >> inp[i];
        fill(scan, scan + n, 0);
        set <int32_t> st;
        for (int i = n-1; i >= 0; i--)
        {
            st.insert(inp[i]); scan[i] = st.size();
        }
        run = 0;
        while (scan[run] != n-run) run++;
        cout << run << '\n';
    }
    return 0;
}