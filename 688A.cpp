#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, d; cin >> n >> d;
    int32_t answer, cnt, sum;
    string str;
    answer = 0; cnt = 0;
    for (int i = 0; i < d; i++){
        cin >> str;
        sum = 0;
        for (auto x:str) sum += x;
        sum -= n*48;
        if (sum!=n) cnt++;
        else{
            answer = max(answer, cnt);
            cnt = 0;
        }
    }
    answer = max(answer, cnt);
    cout << answer;
    return 0;
}