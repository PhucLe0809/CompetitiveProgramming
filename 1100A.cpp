#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    vector <int> inp(n+1);
    for (int i = 1; i <= n; i++) cin >> inp[i];
    int c, answer, x, y;
    vector <int> tick(n+1);
    answer = 0;
    for (int b = 1; b <= n; b++){
        tick = inp; tick[b] = 0;
        for (int i = (1-b)/k-1; i <= (n-b)/k+1; i++){
            c = b + i*k;
            if (1<=c && c<=n) tick[c] = 0;
        }
        x = y = 0;
        for (auto &it:tick){
            if (it==1) x++;
            if (it==-1) y++;
        }
        answer = max(answer, abs(x-y));
    }
    cout << answer;
    return 0;
}