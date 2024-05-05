#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, q, x;
    int64_t even, odd, type, value, answer;
    while (test--){
        cin >> n >> q;
        even = odd = answer = 0;
        for (int i = 0; i < n; i++){
            cin >> x;
            answer += x;
            if (x%2 == 0) even++;
            else odd++;
        }
        while (q--){
            cin >> type >> value;
            if (type==0){
                answer += even*value;
                if (value%2!=0){
                    odd += even; even = 0;
                }
            } else{
                answer += odd*value;
                if (value%2!=0){
                    even += odd; odd = 0;
                }
            }
            cout << answer << '\n';
        }
    }
    return 0;
}