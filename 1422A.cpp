#include <bits/stdc++.h>

using namespace std; 
double fence[5];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    while (test--){
        cin >> fence[0] >> fence[1] >> fence[2];
        sort(fence, fence+3);
        cout << int64_t(ceil(sqrt(pow(fence[1], 2)+pow(fence[2]-fence[0], 2))));
        cout << '\n';
    }
    return 0;
}