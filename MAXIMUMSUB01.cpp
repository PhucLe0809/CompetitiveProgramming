#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int64_t x, sum, answer; sum = 0; answer = LONG_MIN;
    for (int i = 0; i < n; i++){
        cin >> x;
        sum = max(sum+x, x);
        answer = max(answer, sum);
    }
    cout << answer;
    return 0;
}