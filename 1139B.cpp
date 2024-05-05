#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int64_t> inp(n);
    int64_t total = 0;
    for (int i = 0; i < n; i++){
        cin >> inp[i]; total += inp[i];
    }
    int64_t pivot, presum;
    pivot = n-1; presum = inp[n-1];
    // for (int i = n-2; i >= 0; i--){
    //     if (presum<inp[i]) pivot = i;
    //     presum += inp[i];
    // }
    int64_t answer = presum = inp[pivot];
    for (int i = pivot-1; i >= 0; i--){
        if (inp[i]>=presum) presum = max(presum-1, 0LL);
        else presum = inp[i];
        answer += presum;
    }
    cout << answer;
    return 0;
}