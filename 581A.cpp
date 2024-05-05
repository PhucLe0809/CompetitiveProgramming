#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t red, blue; cin >> red >> blue;
    cout << min(red, blue) << " " << (red - min(red, blue))/2 + (blue - min(red, blue))/2;
    return 0;
}