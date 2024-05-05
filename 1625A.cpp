#include <bits/stdc++.h>

using namespace std; 
int32_t scan[105][32];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, len, x, t, cnt1, cnt0, answer; 
    while (test--){
        cin >> n >> len;
        for (int i = 0; i < n; i++){
            cin >> x; t = len-1;
            while (x!=0){
                scan[i][t]=x%2;
                x /= 2;
                t--;
            }
            for (int j = t; t >= 0; t--) scan[i][t]=0;
        }
        for (int j = 0; j < len; j++){
            cnt1 = cnt0 = 0;
            for (int i = 0; i < n; i++){
                if (scan[i][j]==0) cnt0++;
                else cnt1++;
            }
            if (cnt1>cnt0) scan[n][j]=1;
            else scan[n][j]=0;
        }
        answer = 0;
        for (int j = len-1; j >= 0; j--){
            answer += scan[n][j]*pow(2, len-j-1);
        }
        cout << answer << '\n';
    }
    return 0;
}