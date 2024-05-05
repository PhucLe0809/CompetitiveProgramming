#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, i; string str, ansi; bool check;
    string pattern = "FBFFBFFBFBFFBFFBFBFFBFFB";
    while (test--)
    {
        cin >> n >> str;
        if (n == 1) cout << "YES\n";
        else if (n == 2 && str[0] != str[1]) cout << "YES\n"; 
        else
        {
            i = 0; check = false;
            while (i < pattern.size()-n+1 && !check)
            {
                ansi = pattern.substr(i, n); //cout << pattern << '\n';
                if (ansi == str) check = true; //cout << ansi << '\n';
                i++;
            }
            if (check) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}