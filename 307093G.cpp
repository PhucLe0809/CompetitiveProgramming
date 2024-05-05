#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
struct newsta{
    vector <int> s, sgcd = {0};

    void push(int x){
        s.push_back(x);
        sgcd.push_back(__gcd(sgcd.back(), x));
    }
    int pop(){
        int res = s.back();
        s.pop_back();
        sgcd.pop_back();
        return res;
    }
    bool empty(){
        return s.empty();
    }
    int get_gcd(){
        return sgcd.back();
    }
};
newsta s1, s2;

void add(int x){
    s2.push(x);
}
void remove(){
    if (s1.empty()){
        while (!s2.empty()){
            s1.push(s2.pop());
        }
    }
    s1.pop();
}
bool is_good(){
    int gcd = __gcd(s1.get_gcd(), s2.get_gcd());
    // cout << gcd << endl;
    return gcd == 1;
}

void GOTOHANOI(){
    int n; cin >> n;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    int l = 0, r = 0, len = 2*n;
    while (l < n){
        while (r < n && !is_good()){
            add(inp[r++]);
            // cout << s2.get_gcd() << endl;
        }
        if (!is_good()) break;
        len = min(len, r - l);
        remove(); l++;
    }
    if (len == 2*n) cout << -1 << endl; else cout << len << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1; //cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}