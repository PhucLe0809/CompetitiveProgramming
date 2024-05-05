#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

int calc_inter(int a, int b, int x, int y){
    if (b <= x || y <= a) return 0;
    if (x <= a && b <= y) return b - a;
    if (a <= x && y <= b) return y - x;
    if (x <= a && a <= y) return y - a;
    if (x <= b && b <= y) return b - x;
    if (a <= x && x <= b) return b - x;
    if (a <= y && y <= b) return y - a;
    return 0;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    vector <int> one(4), two(4);
    for (auto &it:one) cin >> it;
    for (auto &it:two) cin >> it;
    int a = min(one[0], one[2]), b = min(one[1], one[3]);
    int c = max(one[0], one[2]), d = max(one[1], one[3]);
    int x = min(two[0], two[2]), y = min(two[1], two[3]);
    int z = max(two[0], two[2]), t = max(two[1], two[3]);
    cout << calc_inter(a, c, x, z) * calc_inter(b, d, y, t);
    return 0;
}