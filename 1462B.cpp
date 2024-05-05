#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n; 
    string str, ansi, infront, behind;
    bool check;
    while (test--)
    {
        cin >> n >> str;
        check = false;
        infront = "";
        behind = str.substr(n-4, 4);
        for (int i = 0; i < 5 && !check; i++)
        {
            ansi = infront + behind;
            if (ansi == "2020") check = true;
            infront += str[i]; 
            if (behind.size() <= 1)
                behind = "";
            else behind.erase(behind.begin());
            //cout << ansi << '\n';
        }
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}