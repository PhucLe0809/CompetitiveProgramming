#include <bits/stdc++.h>

using namespace std; 
int32_t a[105], b[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, t, pos, value;
    while (test--){
        cin >> n >> t;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        pos = -1; value = 0;
        for (int i = 0; i < n; i++){
            if (a[i]+i<=t){
                if (b[i]>value){
                    pos = i+1; value = b[i];
                }
            }
        }
        cout << pos << '\n';
    }
    return 0;
}