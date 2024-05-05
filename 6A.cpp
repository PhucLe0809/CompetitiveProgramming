#include <bits/stdc++.h>

using namespace std; 
int32_t inp[5];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    for (int i = 0; i < 4; i++) cin >> inp[i];
    sort(inp, inp+4);
    int32_t equal, big;
    equal = big = 0;
    for (int i = 0; i < 2; i++){
        if (inp[i]+inp[i+1]>inp[i+2]) big++;
        else{
            if (inp[i]+inp[i+1]==inp[i+2]) equal++;
        }
    }
    if (big > 0) cout << "TRIANGLE\n";
    else{
        if (big==0 && equal > 0) cout << "SEGMENT\n";
        else cout << "IMPOSSIBLE\n";
    }
    return 0;
}