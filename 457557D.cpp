#include <bits/stdc++.h>
#define endl '\n'
#define maxarray 750
#define inf 1000000007

using namespace std;
int dp[maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    sort(inp.begin(), inp.end());
    int pivot = 10;
    int cnt = 0;
    int pent = 0;
    for (int i = 0; i < n; i++){
        if (pivot + inp[i] <= 720){
            cnt++;
            pivot += inp[i];
            if (pivot <= 360) pent = 0;
            else pent += pivot - 360;
        }else break;
    }
    cout << cnt << " " << pent << endl;
    return 0;
}