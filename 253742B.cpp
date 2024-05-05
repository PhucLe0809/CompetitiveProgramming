#include <bits/stdc++.h>
#define endl '\n'
#define maxarray 300005
#define inf 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> inp(n);
    uint64_t total = 0;
    for (auto &it:inp){
        cin >> it; total += it;
    }
    sort(inp.begin(), inp.end());
    uint64_t sum = 0;
    uint64_t presum = 0;
    for (int i = 0; i < n; i++){
        sum += uint64_t(inp[i]) * i - presum;
        presum += inp[i];
    }
    uint64_t calcsum = total + 2*sum;
    uint64_t gcd = __gcd(calcsum, uint64_t(n));
    cout << calcsum / gcd << " " << n / gcd;
    return 0;
}