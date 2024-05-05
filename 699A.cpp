#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    string str; cin >> str;
    vector <int> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    int answer = INT_MAX;
    for (int i = 0; i < n-1; i++){
        if (str[i]=='R' && str[i+1]=='L'){
            answer = min(answer, (inp[i+1]-inp[i])/2);
        }
    }
    if (answer==INT_MAX) cout << -1;
    else cout << answer;
    return 0;
}