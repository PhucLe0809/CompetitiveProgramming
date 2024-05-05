#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str, ansi;
    int32_t i, pos; bool check;
    while (test--)
    {
        cin >> str >> ansi;
        if (str[0] == ansi[0])
        {
            cout << "YES\n";
            cout << str[0] << "*\n";
            continue;
        } 
        if (str.back() == ansi.back())
        {
            cout << "YES\n";
            cout << "*" << str.back() << '\n';
            continue;
        }
        check = false; i = 0;
        while (i < str.size()-1 && !check)
        {
            for (int j = 0; j < ansi.size()-1 && !check; j++)
                if (str[i]==ansi[j] && str[i+1]==ansi[j+1])
                {
                    check = true; pos = i;
                }
            i++;
        }
        if (check) cout << "YES\n" << "*" << str[pos] << str[pos+1] << "*\n"; 
        else cout << "NO\n";
    }
    return 0;
}