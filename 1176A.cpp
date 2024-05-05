#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t n, cnt;
    while (test--){
        cin >> n;
        cnt = 0;
        while (n!=1 && cnt!=-1){
            if (n%2==0){
                n = n/2; cnt++; continue;
            }
            if (n%3==0){
                n = 2*n/3; cnt++; continue;
            }
            if (n%5==0){
                n = 4*n/5; cnt++; continue;
            }
            cnt = -1;
        }
        cout << cnt << '\n';
    }
    return 0;
}