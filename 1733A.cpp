#include <bits/stdc++.h>

using namespace std; 
int32_t scan[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, k, x;
    int64_t answer;
    while (test--){
        cin >> n >> k;
        fill(scan, scan+n, 0);
        for (int i = 0; i < n; i++){
            cin >> x;
            scan[i%k] = max(scan[i%k], x);
        }
        answer = 0;
        for (int i = 0; i < k; i++) answer += scan[i];
        cout << answer << '\n';
    }
    return 0;
}