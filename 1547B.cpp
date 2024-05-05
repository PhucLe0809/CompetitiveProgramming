#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str, ansi; bool check;
    int32_t n, i, pos, left, right;
    char infront;
    while (test--)
    {
        cin >> str; 
        pos = -1; n = str.size();
        for (int i = 0; i < n && pos == -1; i++)
            if (str[i] == 'a') pos = i;
        if (pos == -1) cout << "NO\n";
        else
        {
            left = max(pos-1, 0); right = min(pos+1, n-1);
            infront = 'a'; i = 1;
            while (i < n)
            {
                if (left >= 0 && int(str[left])-int(infront) == 1)
                {
                    infront = str[left]; left--; i++;
                } 
                else if (right < n && int(str[right])-int(infront) == 1)
                    {
                        infront = str[right]; right++; i++;
                    } else break;
                //cout << str[left]-infront << '\n';
            }
            if (i == n) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}