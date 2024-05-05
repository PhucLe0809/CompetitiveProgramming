#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str; int32_t left, right, cnt;
    while (test--)
    {
        cin >> str;
        left = 0;
        while (str[left] == '0') left++;
        right = str.size()-1;
        while (str[right] == '0') right--;
        cnt = 0;
        for (int i = left; i < right; i++)
            if (str[i] == '0') cnt++;
        cout << cnt << '\n';
    }
    return 0;
}