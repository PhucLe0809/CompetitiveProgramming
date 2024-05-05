#include <bits/stdc++.h>

using namespace std; 
int32_t inp[55];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, x, y, even, odd, cnt, answer;
    bool check;
    while (test--){
        cin >> n;
        even = odd = 0;
        for (int i = 0; i < n; i++){
            cin >> inp[i];
            if (inp[i]%2==0) even++;
            else odd++;
        }
        if (odd%2==0) cout << 0 << '\n';
        else{
            answer = 100;
            x = even; y = odd;
            for (int i = 0; i < n; i++){
                cnt = 0; even = x; odd = y;
                while (odd%2!=0){
                    if (inp[i]%2==0 && (inp[i]/2)%2!=0){
                        even--; odd++;
                    }else if (inp[i]%2!=0 && (inp[i]/2)%2==0){
                            odd--; even++;
                        }
                    cnt++; inp[i] /= 2;
                }
                answer = min(answer, cnt);
            }  
            cout << answer << '\n';          
        }
    }
    return 0;
}