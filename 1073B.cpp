#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    deque <int> inp(n);
    for (int i = 0; i < n; i++){
        cin >> inp[i]; 
    }
    vector <int> book(n);
    for (int i = 0; i < n; i++){
        cin >> book[i]; 
    }
    vector <int> scan(n), tick(n+1, 0);
    int t, infront = 0;
    for (int i = 0; i < n; i++){
        if (tick[book[i]]){
            scan[i] = 0; continue; 
        }
        t = infront;
        while (inp[t]!=book[i] && t<n) t++;
        if (t<n && inp[t]==book[i]){
            for (int j = infront; j <= t; j++) tick[inp[j]] = 1;
            scan[i] = (t-infront)+1; infront = t+1;
            // while (t--) inp.pop_front();
        };
    }
    for (auto &it:scan) cout << it << " ";
    return 0;
}