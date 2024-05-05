#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, l, a; cin >> n >> l >> a;
    vector <pair<int, int>> inp(n);
    for (int i = 0; i < n; i++){
        cin >> inp[i].first >> inp[i].second;
    }
    if (n==0){
        cout << l/a; return 0;
    }
    int answer = inp[0].first/a + (l-(inp[n-1].first+inp[n-1].second))/a;
    for (int i = 1; i < n; i++){
        answer += (inp[i].first-(inp[i-1].first+inp[i-1].second))/a;
    }
    cout << answer;
    return 0;
}