#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    sort(inp.begin(), inp.end());
    vector <int> scan(n);
    for (int i = 1; i < n; i += 2){
        scan[i] = inp[i/2];
    }
    for (int i = 0; i < n; i++){
        if (scan[i]==0) scan[i] = inp[n/2+i/2];
    }
    int answer = 0;
    for (int i = 1; i < n-1; i++){
        if (scan[i]<scan[i-1] && scan[i]<scan[i+1]) answer++;
    }
    cout << answer << '\n';
    for (auto &it:scan) cout << it << " ";
    return 0;
}