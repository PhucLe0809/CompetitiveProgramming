#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    int x, m, res, answer;
    m = res = 0; answer = -1;
    for (int i = 1; i <= n; i++){
        cin >> x;
        m += min(x+res, 8);
        res = max(x+res-8, 0);
        if (m>=k){
            (answer==-1)?(answer=i):(false);
        }
    }
    cout << answer;
    return 0;
}