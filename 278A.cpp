#include <bits/stdc++.h>

using namespace std; 
int32_t inp[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t total = 0;
    for (int i = 1; i <= n; i++){
        cin >> inp[i]; total += inp[i];
    }
    int32_t s, t; cin >> s >> t;
    if (s>t) swap(s, t);
    int32_t in;
    in = 0;
    for (int i = s; i < t; i++) in += inp[i];
    cout << min(in, total-in);
    return 0;
}