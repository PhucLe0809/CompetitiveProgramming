#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    vector <int> inp(2*n);
    for (auto &it:inp) cin >> it;
    sort(inp.begin(), inp.end());
    int answer = 0;
    for (int i = 1; i < n; i++){
        answer += (inp[i] - inp[i-1]);
        answer += (inp[2*n-i] - inp[2*n-i-1]);
    }
    cout << answer << endl;
    for (int i = 0; i < n; i++){
        cout << inp[i] << " " << inp[2*n-i-1] << endl; 
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}