#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <double> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    sort(inp.begin(), inp.end());
    double answer = 0.0;
    double pi =  3.141592653589;
    for (int i = ((n+1)&1)?(1):(0); i < n; i+=2){
        answer += (pi*inp[i]*inp[i])-(pi*inp[i-1]*inp[i-1]);
    }
    cout << fixed << setprecision(9) << answer;
    return 0;
}