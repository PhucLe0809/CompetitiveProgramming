#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str; 
    while (test--)
    {
        cin >> str;
        cout << int(str[0]) + int(str[2]) - 2*48;
        cout << '\n';
    }
    return 0;
}