#include <bits/stdc++.h>
#define endl '\n'
#define maxarray 300005
#define inf 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <long double> inp(n);
    for (auto &it:inp) cin >> it;
    sort(inp.begin(), inp.end(), greater<>());
    long double answer = 0.0;
    long double res = 0.0;
    long double temp = 1;
    for (auto &it:inp){
        answer = max(answer, it);
        res = res * (1 - it) + temp * it;
        temp = temp * (1 - it);
        answer = max(answer, res);
    }
    cout << fixed << setprecision(10) << answer;
    return 0;
}