#include <bits/stdc++.h>

using namespace std; 
int32_t inp[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, even, odd;
    while (test--){
        cin >> n;
        even = odd = 0;
        for (int i = 0; i < n; i++){
            cin >> inp[i];
            if (inp[i]%2==0) even++;
            else odd++;
        }
        if (even<1 && odd<2) cout << -1;
        else {
            if (even>0){
                cout << 1 << '\n';
                for (int i = 0; i < n; i++){
                    if (inp[i]%2==0){
                        cout << i+1; break;
                    }
                }
            }else{
                int t = 2; cout << 2 << '\n';
                for (int i = 0; i<n && t>0; i++){
                    if (inp[i]%2!=0){
                        cout << i+1 << " ";
                        t--;
                    }
                }
            }
        }
        cout << '\n';
    }
    return 0;
}