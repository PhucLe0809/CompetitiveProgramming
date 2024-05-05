#include <bits/stdc++.h>

using namespace std;
char arr[9][9];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n = 8; bool check;
    string str;
    while (test--)
    {
        check = false;
        for (int i = 0; i < n; i++)
        {
            cin >> str;
            if (str == "RRRRRRRR") check = true;
        }
        if (check) cout << "R\n";
        else cout << "B\n";
    }
    return 0;
}