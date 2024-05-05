#include <bits/stdc++.h>
#define maxarray 27

using namespace std;
int32_t tick[maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n; string str;
    bool check;
    while (test--)
    {
        cin >> n;
        fill(tick, tick + maxarray, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> str;
            for(int j = 0; j < str.size(); j++)
                tick[int(str[j]) - int('a')]++;
        }
        check = true;
        for (int i = 0; i < maxarray && check; i++)
            if (tick[i] % n != 0) check = false;
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}