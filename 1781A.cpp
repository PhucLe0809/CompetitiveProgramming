#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t w, d, h, a, b, f, g;
    while (test--){
        cin >> w >> d >> h;
        cin >> a >> b >> f >> g;
        cout << min({a+h+f+abs(b-g), w-a+h+w-f+abs(b-g), 
        b+h+g+abs(a-f), d-b+h+d-g+abs(a-f)}) << '\n';
    }
    return 0;
}