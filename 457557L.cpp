#include <bits/stdc++.h>
#define endl '\n'
#define maxarray 750
#define inf 1000000007

using namespace std;
int dp[maxarray];
const double eps = 1e-9;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    long double n, R, r; cin >> n >> R >> r;
    if (r > R){
        cout << "NO"; return 0;
    }
    if (r > R/2){
        if (n == 1) cout << "YES";
        else cout << "NO";
        return 0;
    }
    long double pi = acos(-1);
    if ((pi) / n >= asin(r / (R - r)) - eps) cout << "YES";
    else cout << "NO";
    return 0;
}