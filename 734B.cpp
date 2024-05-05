#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t two, three, five, six;
    cin >> two >> three >> five >> six;
    cout << int64_t(min({two, five, six})*256 + min(two - min({two, five, six}), three)*32);
    return 0;
}