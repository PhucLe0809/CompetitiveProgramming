#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
int nb, ns, nc;
int pb, ps, pc;
int cost, b, s, c;

bool is_good(int &k){
    int x = max((b * k - nb) * pb, 0LL);
    int y = max((s * k - ns) * ps, 0LL);
    int z = max((c * k - nc) * pc, 0LL);
    return cost - (x + y + z) >= 0;
}
void GOTOHANOI(){
    string str; cin >> str;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> cost;
    b = s = c = 0;
    for (auto &it:str){
        switch (it){
            case 'B': b++; break;
            case 'S': s++; break;
            case 'C': c++; break;
        }
    }
    int l = 0, r = 3e12;
    while (l < r){
        int mid = (l + r + 1) / 2;
        if (!is_good(mid)) r = mid - 1;
        else l = mid;
    }
    cout << l << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1; // cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}