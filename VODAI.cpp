#include <bits/stdc++.h>
#define maxarray 100005
//limit for array size in Visual Studio Code doesn't hit level 10^6 elements
//If you want, please up to 10^6 when you submit code!

using namespace std; 
int32_t inp[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 0; i < n; i++) cin >> inp[i];
    int32_t answer = 1;
    int32_t len = 1;
    int32_t minn = inp[0];
    inp[n] = 1;
    for (int i = 1; i <= n; i++){
        minn = min(minn, inp[i]);
        len++;
        if (minn >= len) continue;
        else{
            answer = max(answer, len-1);
            minn = inp[i]; len = 1;
        }
    }
    cout << answer << '\n';
    return 0;
}