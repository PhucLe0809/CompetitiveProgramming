#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int x, answer = INT_MAX;
    for (int i = 0; i < n; i++){
        cin >> x; answer = min(answer, abs(x));
    }
    cout << answer;
    return 0;
}