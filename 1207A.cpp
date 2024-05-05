#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t b, p, f, h, c, answer;
    while (test--){
        cin >> b >> p >> f >> h >> c;
        b /= 2;
        if (h>c){
            answer = min(b, p)*h;
            b -= min(b, p);
            answer += min(b, f)*c;
        } else {
            answer = min(b, f)*c;
            b -= min(b, f);
            answer += min(b, p)*h;
        }
        cout << answer << '\n';
    }
    return 0;
}