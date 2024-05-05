#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    string str; cin >> str;
    map <char, int32_t> mp;
    mp['z'] = mp['e'] = mp['r'] = mp['o'] = mp['n'] = 0;
    for (int i = 0; i < n; i++) mp[str[i]]++;
    int32_t one = mp['n'];
    int32_t zero = mp['z'];
    for (int i = 0; i < one; i++) cout << 1 << " ";
    for (int i = 0; i < zero; i++) cout << 0 << " ";
    return 0;
}