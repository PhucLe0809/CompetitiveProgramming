#include <bits/stdc++.h>
#define maxarray 200005

using namespace std; 
int32_t inp[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 0; i < n; i++) cin >> inp[i];
    int32_t answer, cnt, j;
    answer = 0;
    j = n-1;
    while (inp[j]==1){
        answer++; j--;
    }
    j = 0;
    while (inp[j]==1){
        answer++; j++;
    }
    cnt = 0;
    for (int i = j; i < n; i++){
        if (inp[i]==1) cnt++;
        else{
            answer = max(answer, cnt);
            cnt = 0;
        }
    }
    cout << answer << '\n';
    return 0;
}