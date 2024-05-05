#include <bits/stdc++.h>

using namespace std; 
int64_t inp[5];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    while (test--){
        cin >> inp[0] >> inp[1] >> inp[2];
        sort(inp, inp + 3);
        if (inp[2] - inp[0] <= 1)
            cout << 0;
        else if (inp[1] == inp[2])
        {
            inp[0]++;
            inp[1]--;
            inp[2]--;
            cout << abs(inp[0] - inp[1]) + abs(inp[1] - inp[2]) + abs(inp[0] - inp[2]);
        }
        else if (inp[0] == inp[1])
        {
            inp[0]++;
            inp[1]++;
            inp[2]--;
            cout << abs(inp[0] - inp[1]) + abs(inp[1] - inp[2]) + abs(inp[0] - inp[2]);
        }
        else
        {
 
            inp[0]++;
            inp[2]--;
            cout << abs(inp[0] - inp[1]) + abs(inp[1] - inp[2]) + abs(inp[0] - inp[2]);
        }
        cout << "\n";
    }
    return 0;
}