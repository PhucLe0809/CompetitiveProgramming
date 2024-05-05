#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> inp(n), local(n);
    int total = 0;
    for (int i = 0; i < n; i++){
        cin >> inp[i]; local[i] += inp[i]*i*4;
        total += local[i];
    }
    int answer, tmp;
    answer = INT_MAX; tmp = 0;
    for (int i = 0; i < n; i++){
        tmp += inp[i];
        answer = min(answer, tmp*i*4 + (total-local[i]));
    }
    cout << answer;
    return 0;
}