#include <bits/stdc++.h>

using namespace std;
vector <string> inp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    string str; bool check = false;
    for (int i = 0; i < n; i++)
    {
        cin >> str; 
        if (!check)
        {
            if (str[0] == 'O' && str[1] == 'O')
            {
                str[0] = '+'; str[1] = str[0]; 
                check = true;
            } else if (str[3] == 'O' && str[4] == 'O')
                    {
                        str[3] = '+'; str[4] = str[3];
                        check = true;
                    }
        }
        inp.push_back(str);
    }
    if (check)
    {
        cout << "YES\n";
        for (auto &x : inp) cout << x << '\n';
    } else cout << "NO\n";
    return 0;
}