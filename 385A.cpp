#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, c; cin >> n >> c;
    vector <int> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    int answer = 0;
    for (int i = 0; i < n-1; i++) answer = max(answer, inp[i]-inp[i+1]-c);
    cout << answer;
    return 0;
}