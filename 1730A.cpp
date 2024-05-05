#include <bits/stdc++.h>
#define maxarray 105

using namespace std; 
int32_t tick[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, c, x, cnt, fre, calc, answer;
    while (test--){
        cin >> n >> c;
        fill(tick, tick+maxarray, 0);
        for (int i = 0; i < n; i++){
            cin >> x; tick[x]++;
        }
        sort(tick, tick+maxarray, greater<>());
        calc = cnt = fre = 0;
        answer = n;
        for (int i = 0; i < maxarray; i++){
            if (!tick[i]) break;
            cnt++; fre += tick[i];
            calc = cnt*c + (n-fre);
            answer = min(answer, calc);
        }
        cout << answer << '\n';
    }
    return 0;
}