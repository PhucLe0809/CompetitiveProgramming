#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n; string pre;
    while (test--)
    {
        cin >> n; pre = "21";
        if (n%3 == 1) cout << "1";
        else if (n%3 == 2)
            { cout << "2"; pre = "12"; }
        for (int i = 0; i < n/3; i++) cout << pre;
        cout << '\n';
    }
    return 0;
}