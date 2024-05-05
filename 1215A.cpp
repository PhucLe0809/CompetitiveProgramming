#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t a1, a2, k1, k2, n;
    cin >> a1 >> a2 >> k1 >> k2 >> n;
    int64_t given = a1*(k1-1) + a2*(k2-1);
    cout << max(0ll, n-given) << " ";
    int64_t player, answer;
    if(k1 >= k2){
        player = n/k2;
        answer = min(player, a2);
        n -= answer*k2;
        player = n/k1;
        answer += min(player, a1);
    }else{
        player = n/k1;
        answer = min(player, a1);
        n -= answer*k1;
        player = n/k2;
        answer += min(player,a2);
    }
    cout << answer << '\n';
    return 0;
}