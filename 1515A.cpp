#include <bits/stdc++.h>

using namespace std; 
int32_t inp[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, x, sum;
    while (test--){
        cin >> n >> x;
        sum = 0;
        for (int i = 0; i < n; i++){
            cin >> inp[i];
            sum += inp[i];
        }
        if (sum==x) cout << "NO\n";
        else{
            cout << "YES\n";
            sort(inp, inp+n, greater<>());
            for (int i = 0; i < n-1; i++){
                if (x-inp[i]==0) swap(inp[i], inp[i+1]);
                cout << inp[i] << " ";
                x -= inp[i];
            }
            cout << inp[n-1] << '\n';
        }
    }
    return 0;
}