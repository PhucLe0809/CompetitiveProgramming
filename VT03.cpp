#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int maxx = LONG_MIN; int ind = 0;
    for (int i = 0; i <n; i++){
        int x; cin >> x;
        if (x >= maxx){
            maxx = x; ind = i;
        }
    }
    cout << ind;
    return 0;
}