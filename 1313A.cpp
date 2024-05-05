#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t a, b, c, cnt;
    int32_t inp[5];
    while (test--){
        for (int i = 0; i < 3; i++){
            cin >> inp[i];
        }
        sort(inp, inp+3, greater<>());
        a = inp[0]; b = inp[1]; c = inp[2];
        cnt = 0;
        if (a>0){a--; cnt++;}
        if (b>0){b--; cnt++;}
        if (c>0){c--; cnt++;}
        if (a>0 && b>0){a--; b--; cnt++;}
        if (a>0 && c>0){a--; c--; cnt++;}
        if (b>0 && c>0){b--; c--; cnt++;}
        if (a>0 && b>0 && c>0) cnt++;
        cout << cnt << '\n';
    }
    return 0;
}