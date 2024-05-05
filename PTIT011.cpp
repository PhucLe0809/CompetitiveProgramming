#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    if (n < 3){
        cout << "NO"; return 0;
    }
    int sum, i;
    sum = i = 0;
    while (sum < n) sum += i, i++;
    bool a = sum == n;
    sum = i = 0;
    while (sum < n) sum += 2*i + 1, i++;
    bool b = sum == n;
    if (a || b) cout << "YES"; else cout << "NO";
    return 0;
}