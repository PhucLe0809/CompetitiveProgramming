#include <bits/stdc++.h>

using namespace std; 
int32_t inp[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, height;
    while (test--){
        cin >> n;
        height = 1;
        for (int i = 0; i < n; i++) cin >> inp[i];
        if (inp[0]==1) height++;
        for (int i = 1; i < n; i++){
            if (inp[i]==1){
                if (inp[i-1]==1) height += 5;
                else height++;
            } else {
                if (inp[i-1]==0){
                    height = -1; break;
                }
            }
        }
        cout << height << '\n';
    }
    return 0;
}