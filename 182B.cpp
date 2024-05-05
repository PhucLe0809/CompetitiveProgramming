#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int d, n; cin >> d >> n;
    vector <int> inp(n);
    int answer = 0;
    for (int i = 0; i < n; i++) cin >> inp[i];
    for (int i = 1; i < n; i++){
        if (inp[i-1]!=d) answer += d-inp[i-1];
    }
    cout << answer;
    return 0;
}