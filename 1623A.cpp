#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, m, rb, cb, rd, cd;
    int32_t answer;
    while (test--){
        cin >> n >> m;
        cin >> rb >> cb >> rd >> cd;
        answer = 1e9;
        if (rb==rd) answer = 0;
        else{
            if (rb > rd)
                answer = min(answer, (n-rb)+(n-rd));
            else answer = min(answer, rd-rb);
        }
        if (cb==cd) answer = 0;
        else{
            if (cb > cd)
                answer = min(answer, (m-cb)+(m-cd));
            else answer = min(answer, cd-cb);
        }
        cout << answer << '\n';
    }
    return 0;
}