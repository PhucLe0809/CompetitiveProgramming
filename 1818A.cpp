#include <bits/stdc++.h>

using namespace std; 
char inp[105][105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, k, cnt;
    bool check;
    while (test--){
        cin >> n >> k;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < k; j++) cin >> inp[i][j];
        }
        cnt = n;
        for (int i = 1; i < n; i++){
            check = true;
            for (int j = 0; j<k && check; j++){
                if (inp[i][j]!=inp[0][j]) check = false;
            }
            if (!check) cnt--;
        }
        cout << cnt << '\n';
    }
    return 0;
}