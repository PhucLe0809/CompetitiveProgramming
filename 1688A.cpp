#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, cnt0, cnt1, answer, bit;
    while (test--){
        cin >> n;
        answer = 0; cnt0 = -1; cnt1 = 0;
        bit = 0;
        while(n > 0){
            if (n%2==1){
                if (cnt1==0) answer += pow(2, bit);
                cnt1++;
            } else {
                if (cnt0==-1) cnt0 = bit;
            }
            n/=2;
            bit++;
        }
        if(cnt1==1){
            if (cnt0==-1) cnt0=bit;
            answer += pow(2, cnt0);
        }
        cout << answer << '\n';
    }
    return 0;
}