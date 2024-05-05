#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test; 
    string str; 
    int32_t i, j;
    string pivot = "Yes";
    while (test--)
    {
        cin >> str; j = 0;
        while (j < 3 && str[0] != pivot[j]) j++;
        if (j > 3) cout << "NO\n";
        else
        {
            i = 0;
            while (i < str.size())
            {
                j %= 3;
                if (str[i] != pivot[j]) break;
                else {i++; j++;}
            }  
            if (i == str.size()) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}