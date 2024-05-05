#include <bits/stdc++.h>

using namespace std;
int64_t a[1005], b[1005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int j = 0; j < n; j++) cin >> b[j];
    int64_t answer = 0;
    int64_t x, y;
    for (int i = 0; i < n; i++){
        x = y = 0;
        for (int j = i; j < n; j++){
            x |= a[j]; y |= b[j];
            answer = max(answer, x+y);
        }
    }
    cout << answer;
    return 0;
}