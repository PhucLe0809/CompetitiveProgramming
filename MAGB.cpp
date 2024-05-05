#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 100005

using namespace std;
int bit[maxarray];

void update(int pos){
    for ( ; pos < maxarray; pos += (pos&(-pos))) bit[pos]++;
}
int get(int pos){
    int out = 0;
    for ( ; pos > 0; pos -= (pos&(-pos))) out += bit[pos];
    return out;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int res = 0;
    fill(bit, bit + maxarray, 0);
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        res += get(maxarray - 1) - get(x);
        update(x);
    }
    cout << res;
    return 0;
}