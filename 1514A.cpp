#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, tmp; bool check;
    while (test--)
    {
        cin >> n; check = false;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp; 
            if (sqrt(tmp) != int(sqrt(tmp))*1.0)
                check = true;
        }
        if (!check) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}