#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t x, n; 
    int64_t even[]={-1, 1, 1, -1};
    int64_t odd[]={1, -1, -1, 1};
    while (test--){
        cin >> x >> n;
        if (x%2==0){
            for (int64_t i = (n/4)*4; i < n; i++) x += (i+1)*even[i-(n/4)*4];
        }else{
            for (int64_t i = (n/4)*4; i < n; i++) x += (i+1)*odd[i-(n/4)*4];
        }
        cout << x << '\n';
    }
    return 0;
}