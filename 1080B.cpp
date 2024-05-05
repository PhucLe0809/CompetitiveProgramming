#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int q; cin >> q;
    int64_t l, r, answer;
    while (q--){
        cin >> l >> r;
        answer = (r-l+1)/2;
        if (l%2==0) answer *= (-1);
        if ((r-l+1)%2!=0){
            if (r%2!=0) answer -= r;
            else answer += r;
        }
        cout << answer << '\n';
    }
    return 0;
}