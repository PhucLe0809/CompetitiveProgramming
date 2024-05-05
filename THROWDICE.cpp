#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int arr[7] = {0, 6, 5, 4, 3, 2, 1};
    int sum = 0;
    for (int i = 0; i < 3; i++){
        int x; cin >> x; sum += arr[x];
    }
    cout << sum;
    return 0;
}