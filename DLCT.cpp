#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector <int> one(n);
    for(auto &it:one) cin >> it;
    vector <int> two(n);
    for (auto &it:two) cin >> it;
    int a = 0, b = 0, x = 0, y = 0;
    for (int i = 0; i < n; i++){
        if (one[i] != 0) a++;
        if (two[i] != 0) b++;
        if (one[i] != 0 && two[i] != 0){
            if (one[i] > two[i]) y++;
            if (one[i] < two[i]) x++;
        }
    }
    if (a == b){
        if (x == y) cout << "Double Win";
        else{
            y += 100;
            if (x > y) cout << 1; else cout << 2;
        }
    }else{
        if (a > b) cout << 1; else cout << 2;
    }
    return 0;
}