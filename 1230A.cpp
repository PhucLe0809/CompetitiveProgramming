#include <bits/stdc++.h>

using namespace std; 
int32_t inp[5];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t sum = 0;
    for (int i = 0; i < 4; i++){
        cin >> inp[i];
        sum += inp[i];
    }
    bool check = false;
    for (int i = 0; i<4 && !check; i++)
        if (sum-inp[i]==inp[i]) check = true;
    for (int i = 0; i<3 && !check; i++){
        for (int j = i+1; j<4 && !check; j++)
            if (sum-(inp[i]+inp[j])==inp[i]+inp[j])
                check = true;
    }
    if (check) cout << "YES\n";
    else cout << "NO\n";
    return 0; 
}