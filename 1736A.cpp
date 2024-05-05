#include <bits/stdc++.h>
#define maxarray 105

using namespace std; 
int32_t one[maxarray], two[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, x, a, b, cnt;
    while (test--){
        cin >> n; a = b = 0;
        for (int i = 0; i < n; i++){
            cin >> one[i]; a += one[i];
        }
        for (int i = 0; i < n; i++){
            cin >> two[i]; b += two[i];
        }
        cnt = 0;
        for (int i = 0; i < n; i++){
            if (one[i]!=two[i]) cnt++;
        }
        cout << min(cnt, abs(a-b)+1) << '\n';
    }
    return 0;
}