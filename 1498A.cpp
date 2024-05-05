#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t n, plus; 
    string str;
    while (test--){
        cin >> n;
        for (int i = 0; i <= 3; i++){
            plus = 0; str = to_string(n+i);
            for (auto x : str) plus += x;
            plus -= str.size()*48;
            if (__gcd(n+i, plus)>1){
                cout << n+i << '\n';
                break;
            }
        }
    }
    return 0;
}