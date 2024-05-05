#include <bits/stdc++.h>
#define maxarray 10005

using namespace std;
int32_t inp[maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, tmp, infront; bool check;
    while (test--)
    {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> inp[i];
        check = false;
        for (int i = 1; i < n && !check; i++)
            if (inp[i] < inp[i-1]) check = true;
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}