#include <bits/stdc++.h>
#define m 1000000007

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t n, answer;
    while (test--){
        cin >> n;
        answer = 1;
        for (int64_t i = 3; i <= 2*n; i++)
            answer = ((answer%m)*(i%m))%m;
        cout << answer << '\n';
    }
    return 0;
}