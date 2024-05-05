#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    vector <int> inp(n+1);
    for (int i = 0; i < n; i++) cin >> inp[i];  
    if (n==1){
        cout << 1; return 0;
    }
    inp[n] = inp[n-1];
    int answer, cnt; answer = cnt = 1;
    for (int i = 1; i <= n; i++){
        if (inp[i]!=inp[i-1]) cnt++;
        else{
            answer = max(answer, cnt); cnt = 1;
        }
    }
    cout << answer;
    return 0;
}