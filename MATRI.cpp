#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a, b, c; cin >> a >> b >> c;
    vector <int> scan = {a, b, c, a, b, c};
    int answer = 0;
    for (int i = 0; i <= 3; i++){
        answer = max(answer, scan[i]*100 + scan[i+1]*10 + scan[i+2]);
    }
    reverse(scan.begin(), scan.end());
    for (int i = 0; i <= 3; i++){
        answer = max(answer, scan[i]*100 + scan[i+1]*10 + scan[i+2]);
    }
    cout << answer;
    return 0;
}