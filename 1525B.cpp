#include <bits/stdc++.h>

using namespace std; 
int32_t inp[55];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, cnt, maxx, minn;
    while (test--){
        cin >> n; 
        cnt = 0;
        for (int i = 1; i <= n; i++){
            cin >> inp[i]; 
            if (inp[i]!=i) cnt++;
        }
        minn = min_element(inp+1, inp+n+1)-inp;
        maxx = max_element(inp+1, inp+n+1)-inp;
        if (cnt==0) cout << 0;
        else{
            if (minn==1 || maxx==n) cout << 1;
            else{
                if (minn==n && maxx==1) cout << 3;
                else cout << 2;
            }
        }
        cout << '\n';
    }
    return 0;
}