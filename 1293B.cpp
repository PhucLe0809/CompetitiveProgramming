#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    double answer = 0;
    for (int i = 1; i <= n; i++){
        answer += 1.0/i;
    }
    cout << fixed << setprecision(6) << answer;
    return 0;
}