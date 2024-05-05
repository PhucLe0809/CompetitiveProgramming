#include <bits/stdc++.h>

using namespace std; 
int32_t inp[525];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, x, maxx, minn, answer;
    while (test--){
        cin >> n;
        answer = 0;
        for (int i = 0; i < n; i++) cin >> inp[i];
        for (int k = 0; k < 10; k++){
            maxx = 0; minn = 1;
            for (int i = 0; i < n; i++){
                if (inp[i] >> k & 1) maxx = 1;
                else minn = 0;
            }
            answer += (maxx-minn) << k;
        }
        cout << answer << '\n';
    }
    return 0;
}