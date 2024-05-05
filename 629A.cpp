#include <bits/stdc++.h>

using namespace std; 
char inp[105][105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) cin >> inp[i][j];
    }
    int64_t answer = 0;
    int64_t cnt;
    for (int i = 0; i < n; i++){
        cnt = 0;
        for (int j = 0; j < n; j++)
            if (inp[i][j]=='C') cnt++;
        answer += cnt*(cnt-1)/2;
    }
    for (int j = 0; j < n; j++){
        cnt = 0; 
        for (int i = 0; i < n; i++){
            if (inp[i][j]=='C') cnt++;
        }
        answer += cnt*(cnt-1)/2;
    }
    cout << answer;
    return 0;
}