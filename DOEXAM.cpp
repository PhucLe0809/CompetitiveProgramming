#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
int answer = 0;
bool choose[29];
int exam[29], com[29];

void update(int n, int k){
    int sum = 0;
    for (int i = 1; i <= k; i++) sum += exam[com[i]];
   answer = max(answer, sum);
}
void combination(int n, int k, int ind){
    for (int i = 1; i <= n; i++){
        if (!choose[i]){
            com[ind] = i;
            if (com[ind] - com[ind - 1] > 2) return;
            choose[i] = true;
            if (ind == k) update(n, k);
            else combination(n, k, ind+1);
            choose[i] = false;
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k; cin >> n >> k;
    int sum = 0; com[0] = 0;
    for (int i = 1; i <= n; i++){
        cin >> exam[i]; sum += exam[i];
    }
    if (k >= n) answer = sum; else combination(n, k, 1);
    cout << answer;
    return 0;
}