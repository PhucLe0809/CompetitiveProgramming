#include <bits/stdc++.h>
#define endl '\n'
#define maxarray 300005
#define inf 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    vector <int> num(2e6 + 5);
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        num[x]++;
    }
    for(int i = 1; i <= 2e6; i++) num[i] += num[i - 1];
    for(int mxGcd = 1e6; mxGcd >= 1; mxGcd--){
        int cnt = 0;
        for(int CommonDivisor = mxGcd; CommonDivisor <= 1e6; CommonDivisor += mxGcd){
            cnt += num[min(CommonDivisor + k, CommonDivisor + mxGcd - 1)] - num[CommonDivisor - 1];
        }
        if(cnt >= n){
            return cout << mxGcd, 0;
        }
    }
}