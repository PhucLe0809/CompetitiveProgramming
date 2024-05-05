#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str; char key;
    while (test--)
    {
        cin >> str;
        for (int i = 0; i < str.size(); i++)
        {
            key = str[i];
            if (i%2 == 0)
            {
                if (key == 'a') key = 'b';
                else key = 'a';
            } else
            {
                if (key == 'z') key = 'y';
                else key = 'z';
            }
            str[i] = key;
        }
        cout << str << '\n';
    }
    return 0;
}