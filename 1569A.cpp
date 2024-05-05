#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n; string str;
    int32_t l, r;
    while (test--)
    {
        cin >> n >> str;
        l = r = -1;
        for (int i = 0; i < n-1 && l==-1 && r==-1; i++)
            if (str[i] != str[i+1])
            { l = i+1; r = i+2; }
        cout << l << " " << r << '\n';
    }
    return 0;
}