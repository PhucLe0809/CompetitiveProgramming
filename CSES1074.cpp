#include <bits/stdc++.h>
#define inf 1000000000000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int64_t> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    sort(inp.begin(), inp.end());
    vector <int64_t> left(n);
    for (int i = 1; i < n; i++) left[i] = left[i-1] + (inp[i] - inp[i-1])*(i);
    vector <int64_t> right(n);
    for (int i = n-2; i >= 0; i--) right[i] = right[i+1] + (inp[i+1] - inp[i])*(n - i-1);
    int64_t answer = inf;
    for (int i = 0; i < n; i++){
        answer = min(answer, left[i] + right[i]);
    }
    cout << answer;
    return 0;
}