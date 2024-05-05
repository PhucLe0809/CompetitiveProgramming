#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, x; cin >> n >> x;
    vector <pair<int, int>> inp(n);
    int answer = 0; 
    int curr = 1;
    for (int i = 0; i < n; i++){
        cin >> inp[i].first >> inp[i].second;
        while (curr+x <= inp[i].first) curr += x;
        answer += (inp[i].second-curr+1);
        curr = inp[i].second+1;
    }
    cout << answer;
    return 0;
}