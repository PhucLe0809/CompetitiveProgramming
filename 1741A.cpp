#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str, ansi;
    while (test--)
    {
        cin >> str >> ansi;
        if (str == ansi) cout << "=\n";
        else
        {
            if (str.back() != ansi.back())
            {
                if (str.back() > ansi.back())
                    cout << "<\n";
                else cout << ">\n";
            }
            else
            {
                if (str.back() == 'S')
                {
                    if (str.size() > ansi.size()) 
                        cout << "<\n";
                    else cout << ">\n";
                } else if (str.size() > ansi.size())
                            cout << ">\n";
                        else cout << "<\n";
            }
        }
    }
    return 0;
}