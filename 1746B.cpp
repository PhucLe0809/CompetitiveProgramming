#include <bits/stdc++.h>
#define maxarray 200005

using namespace std; 
int32_t inp[maxarray], scan[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, cnt;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++){
            cin >> inp[i]; scan[i] = inp[i];
        }
        sort(inp, inp+n);
        cnt = 0;
        for (int i = 0; i < n; i++){
            if (scan[i]!=inp[i]) cnt++;
        }
        cout << cnt/2 << '\n';
    }
    return 0;
}