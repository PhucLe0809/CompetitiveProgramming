#include <bits/stdc++.h>

using namespace std; 
vector <int32_t> inp;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, d; cin >> n >> d;
    int32_t tmp;
    for(int i = 0; i < n; i++){
        cin >> tmp; inp.push_back(tmp);
    }
    int32_t run;
    for (run = 1; run < n; run++)
        if (inp[run]-inp[run-1] <= d) break;
    if (run == n) cout << -1;
    else cout << inp[run];
    return 0;
}